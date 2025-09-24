#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include <iostream>
#include "Contact.h"
#include "PhoneNumber.h"
using namespace std;
class ContactBook
{
private:
    Contact contacts[100];
    int contactCounter;
    int Size;
public:
    ContactBook()
    {
        contactCounter = 0;
    }
     ContactBook(int Size)
    {
        this->Size=Size;
    }

    void addContact(Contact contact)
    {
        if (contactCounter < 100)
        {
            contacts[contactCounter] = contact;
            contactCounter++;
        }
        else
        {
            cout << "The contact book is full." << endl;
        }
    }
    void displayAllContacts()
    {
        if (contactCounter == 0)
        {
            cout << "The contact book is empty." << endl;
        }
        else
        {
            for (int i = 0; i < contactCounter; i++)
            {
                cout << "-----------------------------" << endl;
                cout << "Name: " << contacts[i].getFirstName()
                     << " " << contacts[i].getLastName() << endl;
                cout << "Email: " << contacts[i].getEmail() << endl;
                cout << "Phone Numbers:" << endl;
                contacts[i].showPhoneNumbers();
            }
            cout << "-----------------------------" << endl;
        }
    }
    void deleteContact(string firstName,string lastName)
    {

        cin.ignore();
        cout << "Enter first name: ";
        getline(cin, firstName);
        cout << "Enter last name: ";
        getline(cin, lastName);
        for(int i=0; i<contactCounter; i++)
        {
            if (contacts[i].getFirstName() == firstName&& contacts[i].getLastName() == lastName)
            {

                for (int j = i; j < contactCounter - 1; j++)
                {
                    contacts[j] = contacts[j + 1];
                }
                contactCounter--;
                cout << "Contact deleted successfully.\n";
                return;
            }
        }
        cout<<"Contact not found.\n";
    }
    void searchContact(string firstName,string lastName)
    {
        cin.ignore();
        cout << "Enter first name: ";
        getline(cin, firstName);
        cout << "Enter last name: ";
        getline(cin, lastName);
        for(int i=0; i<contactCounter; i++)
        {
            if (contacts[i].getFirstName() == firstName&& contacts[i].getLastName() == lastName)
            {
                cout << "\nContact found:\n";
                cout << "Name: " << contacts[i].getFirstName()<< " " << contacts[i].getLastName() << endl;
                cout << "Email: " << contacts[i].getEmail() << endl;
                cout << "Phone Numbers:\n";
                contacts[i].showPhoneNumbers();
                return;
            }
        }
        cout<<"Contact not found.\n";
    }


    ~ContactBook() {}

};

#endif // CONTACTBOOK_H
