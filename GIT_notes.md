## on initial install
	$ git --version
	$ git config --global user.name "Your Name"
	$ git config --global user.email "Your email"
	$ git config --list
	* list all git configurations
	$ git config --list --show-origin
	* view all of your settings and where they are coming from
	$ git config --global core.editor emacs
	* set default text editor
	$ git config user.name
	* check what Git thinks a specific key’s value is
	$ git help <verb>
	$ git <verb> --help

## Local repository
	$ git init <location>
	$ touch .gitignore
	$ git status
	$ git add -A
	$ git reset
	$ git reset <file>
	$ git commit -m "message"
	$ git log

## Remote repo
	$ git clone <url> <where to clone>
	$ git remote -v
	$ git branch -a
	$ git pull origin main
	$ git push origin main
	$ git push -u origin main

## Branching
	$ git branch <branch name>
	$ git checkout <branch name>
        ## Merge a branch
   	$ git checkout main
	$ git pull
	$ git branch --merged
	$ git merge <name of the branch to merge>
	$ git push origin main

## Delete a branch
	$ git branch -d <branch name>
	* this delets the branch locally
	$ git push origin --delete <branch name>
	* this delets the branch remotly


#######################################################
## undo last commit
	$ git commit --amend -m "the new message"	
	* this will also add any files on the staging area to the last commit (without creating a new commit)
	$ git commit --amend
	* Keep or edit the old message
	$ git log --stat
	* show the files that were changed within the last commit.
	* note: this commands will also change the hash of the commit therefor it will change the git history.

## Copy a commit
	* First checkout the branch where to copy to
	$ git cherry-pick (hash)
	* note: cherry-pick doesn't delete commits.

## Move HEAD of branch to a commit
	$ git reset (hash)
	* delete commit and keep changes in working directory
	$ git reset --option (hash)
	--soft > keep changes in the staging area
	--hard > discards changes to the tracked files but keeps untracked files in the working directory

## Delete all untracked files
	$ git clean -df		df=force delete

## Restore commits
	$ git reflog
	* shows commits in the order when u last refrenced them
	$ git checkout (hash)
	* restored commit is in a detached HEAD stat(will be trashed at some point)
	$ git branch <new_branch_name>
	* save the restored changed(commit)
	$ git switch -c <new_branch_name>
	* save and switch

## Revert commits
	$ git revert (hash)
	* undo a commit without changing the git history(this creats a new commit in top of the original commit)
	$ git diff (hash) (hash)
	* show difference between two commits
########################################################
