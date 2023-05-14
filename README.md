# Unreal Engine 5 C++ Template
An Unreal Engine 5 C++ template with various additions from pre-setup editor module, doxygen support, and GitLab/GitHub workflows.

## Using the template
You can clone this repo, run SetupProject.bat/ps1 and you will be guided through the install process for your next Unreal Engine project!

You can find more detailed instructions on our wiki here.

During the process you will be asked various information such as:
- Project name - This will be prefixed on all existing C++ classes, so if your project is called `HideAndSeek` then the game and editor modules will be called `HideAndSeekGame/Editor`. If you do not with for this, you can have the choice to have a shorterned version, if you name is too long. So while the editor modules will remain as `HideAndSeekGame`, classes will be `HASGameModeBase`.
- Git repository link - This project automatically scaffolds your repository, as such you must have a blank repository URL on hand.

While some things can be automated through this process, some steps may require manual intervention when the project is done such as:
- [Status Branches][uegitplugin_statusbranches] - Requires additional information about your workflow, which you can find documented on the [UEGitPlugin repository][uegitplugin_statusbranches]


[uegitplugin_statusbranches]: [https://github.com/ProjectBorealis/UEGitPlugin#status-branches---required-code-changes]