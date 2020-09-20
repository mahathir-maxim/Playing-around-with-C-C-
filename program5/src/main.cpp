//============================================================================
// Name        : CS1337P5.cpp
// Author      : Mahathir Hossan Abir Maxim
// Course	   : CS1337.504 F19
// Version     : 1
// Copyright   : @ 2019
// Description : main source file
//============================================================================


// This program will be creating a useful logging class.
//This class can be used as a means of advanced logging
//in other C++ programs. It will use a factory method design
//pattern such that debugging can be implemented with different
//classes but the main body of code will not know which class it is using.
//It will use a singleton design pattern that will allow us to get a logging
//object from within whatever function requires logging output.


// include preprocessor directives and necessary header files
#include "LoggerClass.h"
#include "FileLoggerSubClass.h"
#include "ScreenLoggerSubClass.h"
#include "SingletonClass.h"

#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <string>


using namespace std;

/*****************************************************************************/

CS1337Logger * LogSingleton::logPtr = NULL;

int main()

{

	// prompt the user for options
	 cout<<"DO you want to create an object of the logger class?"<<endl;
	 cout<<"1. Yes"<<endl;
	 cout<<"2. No"<<endl;
	 int choice;
	 cin>> choice;

	 while ( choice==1) 										// when the user says yes

	 {

		 CS1337Logger *logPtr;									// create a pointer of logger class

		 logPtr=LogSingleton::GetLogger();						// this calls the constructor

		 logPtr->setter(1);

		 logPtr->logMessage("THE PROGRAM IS FUNCTIONAL!!!");	// when the program works prompt this on the screen



		 cout<<"Want to continue ?"<<endl;						// ask the user if he wants to continue
		 cout<<" If yes press 1, else press 2"<<endl;
		 cin>>choice;

	 }

     return 0;

}	// end function main

/*****************************************************************************/
