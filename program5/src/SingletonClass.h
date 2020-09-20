//============================================================================
// Name        : SingletonClass.h
// Author      : Mahathir Hossan Abir Maxim
// Course	   : CS1337.504 F19
// Version     : 1
// Copyright   : @ 2019
// Description : 4th header file
//============================================================================

/* This file contains definitions of the member functions of the Singleton class. */

#ifndef SINGLETONCLASS_H_
#define SINGLETONCLASS_H_

// include preprocessor directive and necessary header files
#include "FileLoggerSubClass.h"
#include "ScreenLoggerSubClass.h"

#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

/*****************************************************************************/

class LogSingleton:public ScreenLogger, public FileLogger

{

private:

     static CS1337Logger *logPtr; 		//static member so it persists till the end of the program

     int dummy3;

public:

     LogSingleton();					// constructor

     void Lsetter(int val);				// setter

     int Lgetter ();						// getter

     static CS1337Logger * GetLogger();	// static pointer



     ~LogSingleton(); 					// destructor

};

/*****************************************************************************/

#endif /* SINGLETONCLASS_H_ */
