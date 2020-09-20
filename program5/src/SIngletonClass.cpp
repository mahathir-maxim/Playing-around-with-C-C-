//============================================================================
// Name        : SingletonClass.cpp
// Author      : Mahathir Hossan Abir Maxim
// Course	   : CS1337.504 F19
// Version     : 1
// Copyright   : @ 2019
// Description : 5th source file
//============================================================================

/* This file contains definition of the the LogSingleton class. */

// include preprocessor directives and necessary header files
#include "SingletonClass.h"

#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

/*****************************************************************************/


LogSingleton:: LogSingleton()// construcotr

{

	//created

}

void LogSingleton:: Lsetter (int val)
{

	dummy3=val;

}

int LogSingleton:: Lgetter ()
{

	return dummy3;

}


CS1337Logger * LogSingleton::GetLogger()  // creates objects

{

     while(logPtr==NULL)

     {

          const bool logTruthVal=0;

          if(logTruthVal)

          {

              logPtr=new ScreenLogger;  // creates screenlogger object and gives the pointer to that

          }

          else

              logPtr=new FileLogger;    // creates filelogger object and gives the pointer to that

     }

     return logPtr;						// returns the pointer

}


LogSingleton:: ~LogSingleton() // destructor

{

	//Destroying

}

/*****************************************************************************/

