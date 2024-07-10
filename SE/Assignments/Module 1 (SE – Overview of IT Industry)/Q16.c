// What happens with git status?

/*Ans:
When you run git status after cloning a repository or anytime during your work with Git, it provides you with important information about the current state of your repository. Here’s what git status typically tells you:

1. On branch: It shows you the current branch you are on. After cloning a repository, Git typically checks out the default branch (often main or master).

2. Your branch is up to date with 'origin/main': This line indicates that your local branch is in sync with the remote branch (main in this case). If you have made commits locally that haven't been pushed to the remote repository, this line might indicate that your branch is ahead of the remote branch.

3. Changes not staged for commit: Git will list any files that have been modified since the last commit but haven't been added to the staging area (git add has not been used on them yet).

4. Untracked files: Files that are in your local directory but are not being tracked by Git. These files won’t be included in commits until you explicitly add them using git add.

5. Changes to be committed: Files that have been added to the staging area (git add has been used on them) and are ready to be committed with git commit.

6. Working tree clean: This message appears when there are no untracked files or changes that haven't been staged or committed. It means your working directory is in a clean state.
*/