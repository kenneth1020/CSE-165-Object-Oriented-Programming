#include <iostream>
#include "Stack.h"

using namespace std;

int main(int argc, const char * argv[]) {
    {
        Stack s1;
        for ( int i=1; i<5; i++ )
            s1.push ( double(i)/2.0 );
    }
    cout<<endl;
    {
        Stack s2(4);
    }
    cout<<"end.";
    return 0;
}
/*
Extend the file stack.h containing Stack class given in order for it to store double numbers (instead of void* pointers).
Add a destructor that will delete all the stack by making calls to pop(), and for each element destroyed the element
will be printed to the output. Now add two constructors: the default one that will create an empty stack, and
another one that will receive an integer n and will build a stack of n elements, such that the first element is 1.0, and
the next ones are incremented of 0.1. Upload your Stack class. It will be then tested for correctness with stacks.cpp.
*/