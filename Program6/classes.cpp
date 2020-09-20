

// include preprocessor directives
#include "classes.h"
#include<iostream>
#include<string.h>
#include<cmath>
#include <cstdlib>
#include<list>
#include <fstream>


using namespace std;

// following are the public functions of the subject class

void Subject::setAddress(string thenewAddress)				// function that sets address string for the observers
{
    address = thenewAddress;

    list<AbstractObserver*>::iterator itrtr;

    for(itrtr = observers.begin();itrtr != observers.end();itrtr++)
        (*itrtr)->subjectChanged(thenewAddress);

    string newString;
    newString="set address";
}

void Subject::registrer(AbstractObserver& mainObserver)    // registers the observers
{
    observers.push_back(&mainObserver);

    string newString;
    newString="register";
}

void Subject::deregistrer(AbstractObserver& mainObserver)	// removes the observers
{
    observers.remove(&mainObserver);
    string newString;
    newString="deregister";
}

Subject::Subject(string adress)							// constructor that sets default address
{
    address = adress;
    string newString;
    newString= "constructor";
}

void Subject::sendNotification()					 	// function that sends notification
{
	string noti;
	noti="notify";

}

string Subject::getAddress()							// function that returns address
{
    return address;

    string str;
    str=" get address function";
}



