//============================================================================
// Name        : FileLoggerSubClass.cpp
// Author      : Mahathir Hossan Abir Maxim
// Course	   : CS1337.504 F19
// Version     : 1
// Copyright   : @ 2019
// Description : 3rd source file
//============================================================================

/* This file contains definitions of the member functions of the FileLogger sub class. */


// include pre processor directives and necessary header files
#include "FileLoggerSubClass.h"

#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

/*****************************************************************************/

FileLogger::FileLogger()

{

     fileOut.open("Log.txt");				// opens the log text file for writing

     if(!fileOut.is_open())					// checks if the file is opened

     {

          cout<<"Error: Output file Log.txt couldn't be open!"<<endl;

          exit(1);

     }

}


void FileLogger::displayMessage(const char* value)

{

	 // displays the information on the screen
	 cout<<"======================================================"<<endl;
     cout<<value<<endl;
     cout<<"FileLogger object has been created!"<<endl;
     cout<<"======================================================"<<endl;

     // display and write the information on the text file
     fileOut<<"======================================================"<<endl;
     fileOut<<value<<endl;
     fileOut<<"FileLogger object has been created!"<<endl;
     fileOut<<"======================================================"<<endl;

}

void FileLogger:: Fsetter (int val)  // sets the value
{

	dummy= val;

}

int FileLogger:: Fgetter () 	// returns the value
{

	return dummy;

}

FileLogger::~FileLogger()

{

	 // destroys the object that was created
     fileOut.close();
     cout<<"Destroying the FileLogger Object!"<<endl;

}

/*****************************************************************************/

