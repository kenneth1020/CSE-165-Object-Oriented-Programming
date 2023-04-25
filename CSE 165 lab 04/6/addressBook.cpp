#include <iostream>
#include <string>
#include "AddressBook.h"
#include"Entry.h"
using namespace std;
/*
Create a struct named AddressBook that stores multiple Entry structs (that you created
in the previous exercise). Your code must be saved in a file named AddressBook.h and
should use Entry structs from Entry.h.
Member functions for AddressBook should be able to add an entry and print all the entries
in the address book. Your code will be tested with the file addressBook.cpp, which reads
in several entries from standard input, stores them in an AddressBook instance and prints
them all out.
*/
int main(int argc, const char * argv[])
{
    int n;
    
    cin >> n;
    
    string name, lastname, email;
    
    AddressBook myAddressBook;
      
    for (int i=0; i<n; i++){
        cin >> name;
        cin >> lastname;
        cin >> email;
        
        Entry *entry = new Entry();
        entry->setName(name);
        entry->setLastname(lastname);
        entry->setEmail(email);
        myAddressBook.add(entry);
    }
    
    myAddressBook.print();

    return 0;
}    