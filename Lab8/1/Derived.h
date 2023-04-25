#ifndef DERIVED_h
#define DERIVED_h
#include <iostream>
#include "ADT.h"

using namespace std;
class Derived : public ADT {
public:
    void doSomething(){
        cout << "Do something" << endl;
    }

    void doSomethingElse(){
        cout << "Do something else" << endl;
    }
    void dontDoThis(){
        cout << "Don't do this" << endl;
    }

};
#endif