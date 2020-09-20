//============================================================================
// Name        : LoggerClass.cpp
// Author      : Mahathir Hossan Abir Maxim
// Course	   : CS1337.504 F19
// Version     : 1
// Copyright   : @ 2019
// Description : 2nd source file
//============================================================================

/* This file contains definition of the member functions of the CS1337Logger class*/


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

CS1337Logger::CS1337Logger()

{

     loggingEnabled=0;				// sets loggingEnabled value to false

}


void CS1337Logger::logMessage(const char* valuePtr)

{

     if(loggingEnabled)  		// if value is call the displayMessage virtual function

          displayMessage(valuePtr);

}

void CS1337Logger::setter(bool truthValue)

{

     loggingEnabled=truthValue; 		// setter sets the truthvalue to true or false

}

bool CS1337Logger:: getter()

{

	return loggingEnabled;				// getter returns the truthvalue to calling function

}

/*****************************************************************************/
