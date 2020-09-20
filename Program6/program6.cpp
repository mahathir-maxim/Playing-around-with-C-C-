

/*
 * The goal of the program is to create a class (the Subject class for this assignment)
 * that has a private variable (address) that can be modified via a standard mutator function (setAddress).
 * This class has additional member functions that allow other classes (the observers)
 *  to register and deregister themselves with the Subject. If observers are registered with the subject,
 *  they will receive notifications (via a callback function) if the subject’s address ever changes.
 */

// include preprocessor directives
#include "classes.h"
#include<iostream>
#include<string.h>
#include<cmath>
#include <cstdlib>
#include<list>
#include <fstream>



using namespace std;

int main()
{
	//cout << "Hello World!" << endl; // prints Hello World!

		// iterators declared of abstractobserver type
	    AbstractObserver *object1;
	    AbstractObserver *object2;
	    AbstractObserver *object3;

	    // objects created dynamically of the observer classes
	    object2 = new BankObserver();
	    object3 = new SchoolObserver();
	    object1 = new CreditObserver();

	    // prompt to the screen
	    cout<<"==================================="<<endl;
	    cout<<"REGISTER:: NOTIFY:: DEREGISTER"<<endl;
	    cout<<"==================================="<<endl;

	    cout<<" Do you want to register and notify the observers ?"<<endl;
	    cout<<" press 1 for yes"<<endl;
	    cout<<" press 2 for no"<<endl;
	    int choice;
	    cin>> choice;

	    while ( choice != 1 & choice !=2)	// for invalid choice
	    {
	    	cout<<"enter a valid option"<<endl;
	    	cin>> choice;
	    }

	    if (choice ==1 )		// when user uses to do so
	    {


	    	// subject class object created dynamically and address stored in pointer of subject type
	    	Subject *Adress = new Subject("God Bless Everyone !");

	    	// observers are registered
	    	Adress->registrer(*object1);
	    	Adress->registrer(*object2);
	    	Adress->registrer(*object3);

	    	// callback
	    	Adress->setAddress(" Observer has been notified");

	    	// observer deregistered
	    	Adress->deregistrer(*object3);
	    	Adress->setAddress(" Observer has been deregistrered");
	    }
	    else
	    {
	    	cout<<"Thank you"<<endl;
	    }

	return 0;
}
