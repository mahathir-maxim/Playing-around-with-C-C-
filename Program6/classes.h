

#ifndef CLASSES_H_
#define CLASSES_H_

// include preprocessor directives
#include<iostream>
#include<string.h>
#include<cmath>
#include <cstdlib>
#include<list>
#include <fstream>



using namespace std;


// abstractobserver class definition
class AbstractObserver
{
public:
    virtual void subjectChanged(string) = 0;
    virtual ~AbstractObserver(){}
};

// subject class definition
class Subject
{
private:
    string address;
    list<AbstractObserver *> observers;
    void sendNotification();

public:
    Subject(string adress);
    void registrer(AbstractObserver& mainObserver);
    void deregistrer(AbstractObserver& mainObserver);
    string getAddress();
    void setAddress(string newAddress);
};

// schoolobserver sub class definition
class SchoolObserver : public AbstractObserver
{
private:
	int dummy;

public:

	SchoolObserver()			// default constructor
	{
		dummy=0;
	}

	void setter (int x)				// setter
	{
		dummy=x;
	}

    void subjectChanged(string stringSupplied)   // displays notification
    {
        cout<<"The SchoolObserver received an address change notification: "<<stringSupplied<<endl;
    }

    int getter () const				//getter
    {
    	return dummy;
    }
};


// bankobserver subclass definition
class BankObserver : public AbstractObserver
{
private:
	int dummy;

public:

	BankObserver()			// default constructor
	{
		dummy=0;
	}

	void setter (int x)		// setter
	{
		dummy=x;
	}

    void subjectChanged(string stringSupplied)  // displays notification
    {
        cout<<"The BankObserver received an address change notification: "<<stringSupplied<<endl;
    }

    int getter () const		// getter
    {
    	return dummy;
    }
};

// creditobserver subclass definition
class CreditObserver : public AbstractObserver
{
private:
	int dummy;

public:

	CreditObserver() 		// default constructor
	{
		dummy=0;

	}
	void setter (int x)		// setter
	{
		dummy=x;
	}

    void subjectChanged(string stringSupplied) // displays notifications
    {
        cout<<"The CreditObserver received an address change notification: "<<stringSupplied<<endl;
    }

    int getter () const 	// getter
    {
    	return dummy;
    }
};





#endif /* CLASSES_H_ */
