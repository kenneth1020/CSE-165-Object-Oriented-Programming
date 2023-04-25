#include <iostream>
#include "Entry.h"
#include <string>
using namespace std;
/*
Create a struct named Entry that stores an entry of an address book. It should have
fields for first name, last name and email address. Provide the appropriate getter and
setter functions for each one of the fields. In addition provide a function called print. This
function should print out the information in the class in the way it appears in the sample.
Your code should go into a file named Entry.h with all the member functions implemented
inline (in the header file). Your code will be tested using the file address book entry.cpp.
*/

int main(int argc, const char * argv[])
{
    string name, lastname, email;
    
    cin >> name;
    cin >> lastname;
    cin >> email;
    
    Entry myEntry;
    
    myEntry.setName(name);
    myEntry.setLastname(lastname);
    myEntry.setEmail(email);
    
    myEntry.print();
    
    return 0;
}