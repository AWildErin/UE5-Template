@page doxygen-use Doxygen Usage
Doxygen is used to create Documentation from c++ code. For this to work correctly formatting rules need to be followed.
The official documentation can be found [here](https://doxygen.nl/)
Doxygen supports XML Documentation, as well as its own set of special commands.
Both will get a short introduction on this Page.

@tableofcontents

# Basics Doxygen
This section will explain the basics of XML and Doxygen commands
For either of these commands to work the comments need to start with `///` or `/**`.
Within these comments [Markdown](https://doxygen.nl/manual/markdown.html) is supported.


## XML Documentation
XML Documentation is preferred for documenting: summaries and function parameters as these will be picked up by Visual Studio.
Visual Studio may automatically insert an XML Template when using `///`, due to Unreal macros this does not always work.

XML Tags use angled brackets `<>` and always have a start tag `< >` and end tag `</ >`, additionally they can have attributes within their start tag, a resulting tag may look like this: `<tagName attribute="value"> </tagName>`
The actual documentation is put between the start and end tag.

We mainly use 3 different XML Tags:
- \<summary\> \</summary\>
    - Used for a short explanation of the function
- \<param name="parameterName"\> \</param\>
    - Used to describe a specific parameter (This should be additional information, not the datatype)
- \<returns\> \</returns\>
    - Used to describe the return type. (This should be additional information, not the datatype)

## Doxygen Commands
Doxygen Commands start with an @. They have no concept of starting/ending tags like XML, for this reason, some commands have start and end variants (for example \@code and \@endcode).
Other tags are ended when the next command starts or the comment ends.
A full list of commands can be found [here](https://doxygen.nl/manual/commands.html). (Do note that these use \ as a prefix, while we use @).

## Automatic Linking
While writing comments in doxygen, it will attempt to link to any reference functions/objects, to refer to a function or variable within a class the c++ syntax is used `class::function`.
A specific overload may be specified as well with the following syntax: `class::function(parameters)`
More information can be found [here](https://doxygen.nl/manual/autolink.html)

## List of useful Doxygen Tags
Here a few commands are listed as a starting point.
A full list of commands can be found [here](https://doxygen.nl/manual/commands.html).

| start command | end command   | description           |
| ------------- | -----------   | --------------------- |
| brief         | n/a           | Same as xml summary tag  |
| details       | n/a           | Detailed Description  |
| todo          | n/a           | Inserts a 'todo' block and adds comment to global todo page  |
| bug           | n/a           | Inserts a 'bug' block and adds comment to global bug page  |
| deprecated    | n/a           | Inserts a 'deprecated ' block and adds comment to deprecated  bug page  |
| warning       | n/a           | Inserts a 'warning ' block  |
| note          | n/a           | Inserts a 'note' block  |
| attention     | n/a           | Inserts a 'attention ' block  |
| precondition  | n/a           | Inserts a 'precondition ' block  |
| code{.cpp}    | endcode       | Inserts a code segment (c++)  |
| link          | endlink       | Creates a link to another member variable/function (Used when automatic link creation fails)  |
| {             | }             | The Documentation above this will be used for all functions within these tags (see documentationExample.h)  |
| date       | n/a           | Prints as date  |
| version       | n/a           | Prints as version  |
| author       | n/a           | Prints as author  |

An Example using all of these can be found in Documentation/examples/documentationExample.h

# Non-Standard Features

## Unreal Macros
Unreal Macros are filtered out before being processed by Doxygen.

## Regions
Regions declared with `#pragma region ....` are used to group certain members into a custom group.
Documentation can be put above the region, which will be shown for the entire group.
This is useful to separate Components from Variables.


# Purpose of Documentation
__Documentation should never be an afterthought, always consider how other devs may interpret your code__

## Code Comments
Comments within code are used to:
1. Explain Why code is written the way it is
2. Create Section
3. Add additional Infomation which is not readable from the source code

Code comments are only useful when looking at source code, so they should not be processed by Doxygen
For this, to work the Comments are to be made with `//` or `/* */`.

## Class Documentation

Class Document should explain the purpose of a class, as well as additional information like the author and date.
For this the following template will be used:
```c++
/// @brief     One Line Description of the Class
/// @author    Your name
/// @date      Date of last modification
/// @details
/// Longer Description if it is needed
```
Additional Infomation may also be included ( for example todo, warning, code example )


## Function Documentation
Function Documentation is used to explain: what the function does, what data it inputs/outputs, and what side effects it may have.
Also, any unexpected errors should be documented. (with an attention or warning tag)
To achieve this every Parameter should get a comment, as well as the return type.
It should be obvious from the parameter name if a parameter is an output, otherwise, it should be assumed to be an input.

# Building & Accessing Documentation

## Gitlab
Whenever Code is pushed to the main branch, it will automatically build the documentation for it.
This is accessible via the "External Wiki" button in the sidebar.

## Local
Building the Documentation locally is useful to test documentation before pushing it to gitlab.
To build the documentation, run "Documentation/buildDocs.bat".
It will automatically download doxygen the first time.
The generated Documentation can be accessed via "Documentation.html"