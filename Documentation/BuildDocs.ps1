
## Check if doxygen exists, if not, install it
If(!(Test-Path -Path ".\doxygen\bin\doxygen.exe" -PathType Leaf))
{
    ## Check if folder exiss, if not create it
    If(!(Test-Path -PathType Container "doxygen/bin"))
    {
        New-Item -Path 'doxygen/bin' -ItemType Directory
    }

    ## Download doxygen
    Invoke-WebRequest -Uri "https://www.doxygen.nl/files/doxygen-1.9.6.windows.x64.bin.zip" -OutFile "doxygen/doxygen.zip"
    ## Unzip doxygen
    Expand-Archive -Path "doxygen/doxygen.zip" -DestinationPath "doxygen/bin"
    ## Remove zip file
    Remove-Item -Path "doxygen/doxygen.zip"
}
## Change Working Directory to project root
Set-Location ".\..\"
## Make Docs
$env:PROJECT_NUMBER = 'LOCAL'; &".\Documentation\doxygen\bin\doxygen.exe" "Documentation\doxygen\doxyfile"
## Wait for user responds
Write-Host -NoNewLine 'Press any key to continue...';
$null = $Host.UI.RawUI.ReadKey('NoEcho,IncludeKeyDown');