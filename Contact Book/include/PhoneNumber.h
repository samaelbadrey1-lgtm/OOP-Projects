#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <iostream>

using namespace std;

class PhoneNumber
{
private:
    string number;
    string type;
public:
    PhoneNumber()
    {
        number="";
        type="";
    }
    PhoneNumber(string number,string type)
    {
        this->number=number;
        this->type=type;

    }
    void setPhoneNumber(string number)
    {
        this->number=number;
    }
    void setType(string type)
    {
        this->type=type;
    }
    string getNumber()
    {
        return number;
    }
    string getType()
    {
        return type;
    }
    ~PhoneNumber() {}

};

#endif // PHONENUMBER_H
