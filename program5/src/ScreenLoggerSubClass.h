//============================================================================
// Name        : ScreenLoggerSubClass.h
// Author      : Mahathir Hossan Abir Maxim
// Course	   : CS1337.504 F19
// Version     : 1
// Copyright   : @ 2019
// Description : 3rd header file
//============================================================================

/* This file includes the definition of the ScreenLogger sub class */

#ifndef SCREENLOGGERSUBCLASS_H_
#define SCREENLOGGERSUBCLASS_H_


// include preprocessor directives and necessary header files
#include "LoggerClass.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

/*****************************************************************************/

class ScreenLogger:public CS1337Logger

{
private:

	 int dummy2;
public:

	 ScreenLogger(); 			// constructor

	 void Ssetter (int val); 	// setter

	 int Sgetter ();			// getter

     void displayMessage(const char* x);  // virtual function that displays on the screen

     ~ScreenLogger();			// destructor

     //virtual ~ScreenLogger();

};

/*****************************************************************************/

#endif /* SCREENLOGGERSUBCLASS_H_ */
