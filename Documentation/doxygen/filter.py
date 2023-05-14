# Purpose:
#   Filter Out Unreal Engine Macros from a file, to be used with Doxygen.

import re
import sys
# Config
Macros = [
    "UFUNCTION",
    "UCLASS",
    "UPROPERTY",
    "UMETA",
    "UPARAM",
    "UENUM",
    "USTRUCT",
    "UINTERFACE",
    "GENERATED_BODY",
    "GENERATED_UCLASS_BODY",
    "GENERATED_USTRUCT_BODY",
    "GENERATED_BODY_LEGACY",
    "GENERATED_BODY_GUID",
    "GENERATED_UINTERFACE_BODY",
    "GENERATED_DELEGATE_SIGNATURE",
]

###############################################################################
# Main
###############################################################################

# Check we have the right number of args
if len(sys.argv) != 2:
    print("Expected filename as 1st argument", file=sys.stderr)
    sys.exit(1)

file = open(sys.argv[1], "r")
if file.closed:
    print("Failed to open file", file=sys.stderr)
    sys.exit(1)

# Read the file
content = file.read()


###############################################################################
# Unreal Engine Macros
###############################################################################

# Generate Regex matching all macros
# They should have a whitespace or tab before them
# and a open parenthesis after them
regex = "\s("
for macro in Macros:
    regex += macro + "|"
regex = regex[:-1] + ")\s*\("



# Find all macros
matches = re.finditer(regex, content)
positionOffset = 0 # Sicne we are going to remove some lines, we need to keep track of the offset

for match in matches:
    start = match.start(1) - positionOffset # Do not get the whitespaces
    end = match.end() - positionOffset
    # Find nested parenthes end
    nested = 1 # We already start after the first (
    while nested > 0:
        if content[end] == "(":
            nested += 1
        elif content[end] == ")":
            nested -= 1
        end += 1
    #print("Removing:", content[start:end])
    content = content[:start] + content[end:] # Remove the macro
    positionOffset += end - start # Keep track of the offset




###############################################################################
# Replace #pragma region with doxygen region
###############################################################################
# Example:
# #pragma region MyRegion -> /// @custom_region{MyRegion}
# #pragma endregion -> /// @}
# #pragma endregion x -> /// @}
###############################################################################

content = re.sub('^#pragma region (.+)$',   '/// @custom_region{\\1}',  content, flags=re.MULTILINE)
content = re.sub('^#pragma endregion.+$',   '/// @}',                   content, flags=re.MULTILINE)


print(content, end="")