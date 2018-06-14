# csc220


To run Notepad++, this needs to be added to the .bashrc file in the home/"your name" directory;
np () {
	/cygdrive/c/Program\ Files/Notepad++/notepad++.exe `cygpath.exe -w "$*"` &
}
