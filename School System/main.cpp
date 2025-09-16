#include <iostream>
#include <Person.h>
#include <Student.h>
#include <Teacher.h>
#include <Course.h>
#include <Classroom.h>
#include <Exam.h>
#include <School.h>
using namespace std;

void AddStudent(School& school)

{
    string name, gender, addr, phoneNumber, email, gradeLevel;
    int age, studentID;
    float GPA;

    cout << "\n=== Add a Student ===\n";
    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter Gender: ";
    getline(cin, gender);
    cout << "Enter Address: ";
    getline(cin, addr);
    cout << "Enter Phone Number: ";
    getline(cin, phoneNumber);
    cout << "Enter Email: ";
    getline(cin, email);
    cout << "Enter Student ID: ";
    cin >> studentID;
    cin.ignore();
    cout << "Enter Grade Level: ";
    getline(cin, gradeLevel);
    cout << "Enter GPA: ";
    cin >> GPA;
    cin.ignore();

    Student s(name, age, gender, addr, phoneNumber, email, studentID, gradeLevel, GPA);
    school.addStudent(s);
}

void AddTeacher(School& school)
{
    string subject;
    int teacherID;
    float salary;
    string name, gender, addr, phoneNumber, email, gradeLevel;
    int age;

    cout << "\n=== Add a Teacher ===\n";
    cout << "Enter Teacher Name: ";
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter Gender: ";
    getline(cin, gender);
    cout << "Enter Address: ";
    getline(cin, addr);
    cout << "Enter Phone Number: ";
    getline(cin, phoneNumber);
    cout << "Enter Email: ";
    getline(cin, email);
    cout << "Enter Teacher ID: ";
    cin >> teacherID;
    cin.ignore();
    cout << "Enter Subject: ";
    getline(cin, subject);
    cout << "Enter Salary: ";
    cin >> salary;
    cin.ignore();

    Teacher t(name, age, gender, addr, phoneNumber, email, teacherID, subject, salary);
    school.addTeacher(t);

}
void AddCourse(School& school)

{
    string code, courseName, courseTeacher;

    cout << "\n=== Add a Course ===\n";
    cout << "Enter Course Code: ";
    getline(cin, code);
    cout << "Enter Course Name: ";
    getline(cin, courseName);
    cout << "Enter Teacher Name: ";
    getline(cin, courseTeacher);

    Course c(code, courseName, courseTeacher);
    school.addCourse(c);

}
void AddClassRoom(School& school)
{
    int roomNumber, capacity;

    cout << "\n=== Add a Classroom ===\n";
    cout << "Enter Room Number: ";
    cin >> roomNumber;
    cout << "Enter Capacity: ";
    cin >> capacity;

    Classroom cr(roomNumber, capacity);
    school.addClassroom(cr);

}
void viewSystem(School school)
{
    cout << "\n=== Final School Data ===\n";
    school.print();
}

int main()

{
    cout<<"\t\t\t\t\t\tEnter details of your school "<<endl;
    string name, address, principle;
    cout<<"Enter name of your school : "<<endl;
    getline(cin,name);
    cout<<"Enter address of your school : "<<endl;
    getline(cin,address);
    cout<<"Enter principle of your school : "<<endl;
    getline(cin,principle);

    School school;
    school.setSchoolName(name);
    school.setAddress(address);
    school.setPrincipalName(principle);
    int choice;
    do
    {
        cout<<"---------------------Welcome to our School System --------------------\n";
        cout<<"Please select a choice : \n";
        cout<<"1- Add Student\n";
        cout<<"2- Add Teacher\n";
        cout<<"3- Add Course\n";
        cout<<"4- Add Classroom\n";
        cout<<"5- View system\n";
        cout<<"0- Exit\n";
        cout<<"Please Enter Your Choice : \n";
        cin>>choice;
        cin.ignore();

        switch(choice)
        {
        case 1:
            AddStudent(school);
            break;

        case 2:
            AddTeacher(school);
            break;

        case 3:
            AddCourse(school);
            break;

        case 4:
            AddClassRoom(school);
            break;

        case 5:
            viewSystem(school);
            break;

        case 0:
            cout<<"Exiting....\n";
            break;

        default :
            cout<<"Invalid Choice!\n";
        }

    }

    while(choice!=0);
    return 0;
}
