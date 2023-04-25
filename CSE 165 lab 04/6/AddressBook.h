#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H
#include <iostream>
#include "Entry.h"
#include <vector>
using namespace std;

struct AddressBook
{
    //private the variables
    private:
    string privateFirstname;
    string privateLastname;
    string privateEmail;
    //create a vector using Entry pointer of firstname, lastname, email
    //Using the structure variables of Entry.h
    vector<Entry*> bookmark;

    //default contructors
    public:
    AddressBook(){};

    AddressBook(string firstname, string lastname,string email){
        this->privateFirstname = firstname;
        this->privateLastname = lastname;
        this->privateEmail = email;
    }
    
    //Add the inputs into the bookmark vector
    void add(Entry* entry){
        bookmark.push_back(entry);
    }


    void print(){
        for(int i=0; i < bookmark.size(); i++)
            bookmark.at(i)->print();
    }
 
};
#endif