#include "Photo.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void Photo::display() const
{
	cout << "Cette photo s'appelle \"" << nom_ << "\" et se situe a " << chemin_ << endl;

}

void Photo::play() const
{
	//CreateProcess(lpApplicationName,   // the path
	//	argv[1],        // Command line
	//	NULL,           // Process handle not inheritable
	//	NULL,           // Thread handle not inheritable
	//	FALSE,          // Set handle inheritance to FALSE
	//	0,              // No creation flags
	//	NULL,           // Use parent's environment block
	//	NULL,           // Use parent's starting directory 
	//	&si,            // Pointer to STARTUPINFO structure
	//	&pi             // Pointer to PROCESS_INFORMATION structure (removed extra parentheses)
	//);
}
