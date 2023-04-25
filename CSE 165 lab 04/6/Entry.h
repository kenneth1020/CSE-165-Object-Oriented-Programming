#ifndef ENTRY2_H
#define ENTRY2_H
#include <iostream>
#include <string>
using namespace std;
struct Entry
{
    public:
    string firstname;
    string lastname;
    string email;

    void setName(string firstName)
    {
        this->firstname = firstName;
    }
    void setLastname(string lastName)
    {
        this->lastname = lastName;
    }
    void setEmail(string inEmail)
    {
        this->email = inEmail;
    }

    void print()
    {
        cout << "First Name: " << firstname << endl;
        cout << "Last Name: " << lastname << endl;
        cout << "Email: " << email << endl;
    }
};
#endif