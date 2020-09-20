//============================================================================
// Name        : FileLoggerSubClass.h
// Author      : Mahathir Hossan Abir Maxim
// Course	   : CS1337.504 F19
// Version     : 1
// Copyright   : @ 2019
// Description : 2nd header file
//============================================================================

/* This file contains the declaration of the FileLogger sub class */

#ifndef FILELOGGERSUBCLASS_H_
#define FILELOGGERSUBCLASS_H_

// include preprocessor directives and necessary header files
#include "LoggerCLass.h"

#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

/*****************************************************************************/

class FileLogger:public CS1337Logger					// File logger class definition
														// with public access to Logger class
{

private:

     ofstream fileOut;
     int dummy;

public:

     FileLogger();										//  default constructor

     void Fsetter (int val);								// setter

     int Fgetter ();										// getter

     void displayMessage(const char* );					// call virtual display function

     ~FileLogger();										// destructor

};

/*****************************************************************************/

#endif /* FILELOGGERSUBCLASS_H_ */

