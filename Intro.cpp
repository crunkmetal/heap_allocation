#include "Intro.h"
#include <iostream>		// for console input/output 
#include <fstream>		// for file streaming
#include <string>		// for getline

using namespace std;									// using standard namespace
// function to display a description of the program
void Intro::getAppDescription()							
{
	string line;										// declare a variable
	ifstream introduction("description.txt", ios::in);	// declare/open a filestream from an external txt doc

	if (introduction.is_open())							// verify file is open and if so...
	{
		cout << "\n";
		while (getline(introduction, line))				// for each line of text in txt doc...
		{
			cout << line << "\n";						// display line to console
		}
		introduction.close();							// close file stream document to prevent corruption of doc
	}
	else												// if file is unable to open, let user know
	{
		cout << "\n  Unable to open input file.\n" << endl;
		system("pause");
		system("CLS");
	}
}
