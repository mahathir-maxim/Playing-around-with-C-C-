//============================================================================
// Name        : ScreenLoggerSubClass.cpp
// Author      : Mahathir Hossan Abir Maxim
// Course	   : CS1337.504 F19
// Version     : 1
// Copyright   : @ 2019
// Description : 4th source file
//============================================================================

/* This file contains definitions of member functions of the ScreenLogger class */


// include preprocessor directives and necessary header files
#include "ScreenLoggerSubClass.h"

#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

/*****************************************************************************/

void ScreenLogger::displayMessage(const char* value)

{

	// displays on the screen
	 cout<<"======================================================"<<endl;
     cout<<value<<endl;
     cout<<"ScreenLogger object has been created!"<<endl;
     cout<<"======================================================"<<endl;

}

ScreenLogger:: ScreenLogger()// constructor definition

{

	// created

}

void ScreenLogger:: Ssetter ( int val) // sets value
{

	dummy2= val;

}

int ScreenLogger:: Sgetter () 		// returns value
{

	return dummy2;

}

ScreenLogger::~ScreenLogger()	// default destructor

{

	cout<<"Destroying the ScreenLogger object!"<<endl;

}

/*****************************************************************************/
