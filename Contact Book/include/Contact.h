#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include "PhoneNumber.h"
using namespace std;

class Contact
{
private:
    string firstName;
    string lastName;
    string email;
    PhoneNumber phoneNumbers[100];
    int phoneCounter;
public:
    Contact()
    {
        firstName="";
        lastName="";
        email="";
        phoneCounter=0;
    }
    Contact(string firstName,string lastName,string email)
    {
        this->firstName=firstName;
        this->lastName=lastName;
        this->email=email;
        phoneCounter=0;

    }
    void setFirstName(string firstName)
    {
        this->firstName=firstName;
    }
    void setLastName(string lastName)
    {
        this->lastName=lastName;
    }
    void setEmail(string email)
    {
        this->email=email;
    }
    string  getFirstName()
    {
        return firstName;
    }
    string  getLastName()
    {
        return lastName;
    }
    string  getEmail()
    {
        return email;
    }
    void addPhoneNumber(PhoneNumber number)
    {
        if (phoneCounter < 100 )
        {
            phoneNumbers[phoneCounter] = number;
            phoneCounter++;
        }
        else
        {
            cout << "This contact already has the maximum number of phone numbers." << endl;
        }
    }


    void showPhoneNumbers()
    {
        if (phoneCounter == 0)
        {
            cout << "No phone numbers available." << endl;
        }
        else
        {
            for (int i = 0; i < phoneCounter; i++)
            {
                cout << "- " << phoneNumbers[i].getNumber()
                     << " (" << phoneNumbers[i].getType() << ")" << endl;
            }
        }
    }

    ~Contact() {}
};

#endif // CONTACT_H
