//============================================================================
// Name        : LoggerClass.h
// Author      : Mahathir Hossan Abir Maxim
// Course	   : CS1337.504 F19
// Version     : 1
// Copyright   : @ 2019
// Description : 1st header file
//============================================================================

/* This header file contains the definition of CS1337Logger Class */

#ifndef LOGGERCLASS_H_
#define LOGGERCLASS_H_

// incllude the preprocessor directives and necessary header files
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

/*****************************************************************************/

class CS1337Logger

{

private:

     bool loggingEnabled;			// declare the private loggingEnabled variable

public:

     CS1337Logger();				// constructor

     void setter(bool);				// sets the value of the private variable

     bool getter();					// returns the value of the private variable

     void logMessage(const char* x);// according to the entry calls display function

     virtual void displayMessage(const char* x)=0; // displays on the screen or writes in a file

     //virtual ~CS1337Logger()=0;

};

/*****************************************************************************/

#endif /* LOGGERCLASS_H_ */
