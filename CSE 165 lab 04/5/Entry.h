#ifndef ENTRY_H
#define ENTRY_H
#include <iostream>
#include <string>
using namespace std;
struct Entry
{
    public:
    string name;
    string lastname;
    string email;

    void setName(string firstName)
    {
        name = firstName;
    }
    void setLastname(string lastName)
    {
        lastname = lastName;
    }
    void setEmail(string inEmail)
    {
        email = inEmail;
    }

    void print()
    {
        cout << "First Name: " << name << endl;
        cout << "Last Name: " << lastname << endl;
        cout << "Email: " << email << endl;
    }
};
#endif