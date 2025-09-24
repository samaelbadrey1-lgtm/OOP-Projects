/*#include <iostream>
#include "Contact.h"
#include "ContactBook.h"
#include "PhoneNumber.h"
using namespace std;

int main()
{
    ContactBook book;
    int choice;

    do
    {
        system("cls");
        cout << "\n====== Contact Book Menu ======\n";
        cout << "1. Add a new contact\n";
        cout << "2. Delete a contact\n";
        cout << "3. Search for a contact\n";
        cout << "4. Display all contacts\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string firstName, lastName, email;
            cin.ignore();
            cout << "Enter first name: ";
            getline(cin, firstName);
            cout << "Enter last name: ";
            getline(cin, lastName);
            cout << "Enter email: ";
            getline(cin, email);

            Contact c(firstName, lastName, email);

            string number, type;
            cout << "Enter phone number: ";
            cin >> number;
            cout << "Enter type (mobile/home/work): ";
            cin >> type;
            PhoneNumber p(number, type);
            c.addPhoneNumber(p);

            book.addContact(c);
            cout << "Contact added successfully!\n";
            break;
        }

        case 2:
        {
            string firstName,lastName;

            book.deleteContact(firstName,lastName);
            break;
        }

        case 3:
        {
            string firstName,lastName;
            book.searchContact(firstName,lastName);
            break;
        }

        case 4:
        {
            book.displayAllContacts();
            break;
        }

        case 5:
            cout << "Exiting program... Goodbye!\n";
            break;

        default:
            cout << "Invalid choice, try again.\n";
        }

        cout << "\n";
        system("pause");
    }
    while (choice != 5);

    return 0;
}*/
#include <iostream>
#include "PhoneNumber.h"
#include "Contact.h"
#include "ContactBook.h"
using namespace std;

int main()
{
    int Size;
    cout << "\t\t\t\t\t--- Contact Book Menu ---\n";
    cout<<"Enter The number of contacts you want : ";
    cin>>Size;
    ContactBook book(Size);
    string number,type,first,last,email;
    int choice;

    do
    {

        cout << "1. Add a new contact\n";
        cout << "2. Delete a contact\n";
        cout << "3. Search for a contact\n";
        cout << "4. Display all contacts\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        switch(choice)
        {
        case 1:
        {
            cout<<"Enter The First Name : ";
            getline(cin,first);
            cout<<"Enter The last Name : ";
            getline(cin,last);
            cout<<"Enter The Email : ";
            getline(cin,email);
            cout<<"Enter The Phone Number : ";
            getline(cin,number);;
            cout<<"Enter The Type of The Phone (Home/Work/Mobile) : ";
            getline(cin,type);
            Contact c(first,last,email);
            c.addPhoneNumber(PhoneNumber(number,type));
            book.addContact(c);
            break;
        }
        case 2:
        {
            string firstName,lastName;

            book.deleteContact(firstName,lastName);
            break;
        }

        case 3:
        {
            string firstName,lastName;
            book.searchContact(firstName,lastName);
            break;
        }
        case 4:
            book.displayAllContacts();
            break;
        case 5:
            cout<<"\t\t\t\t\t.....EXITING....."<<endl;
            break;
        default:
            cout<<"INVALID INPUT"<<endl;
            break;




        }
        }while(choice!=5);
        return 0;
    }
