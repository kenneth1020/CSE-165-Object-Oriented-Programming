#include <iostream>
#include <cassert>
#include <fstream> 
#include "Stack.h"
using namespace std;
/*
Consider the file Stack.h. This file contains the Stack data structure from Chapter 4 of
the textbook. Your task is to write a program that declares an instance of Stack, fills
it up with double numbers and then prints out the numbers. You have to use the Stack
member functions to complete this exercise (except for printing). You need to create a file
called input.txt, which contains floating points numbers at each line. Your program should1
read in these values, store them in a Stack object and print out the values in the reverse
order without deleting them from the stack (for printing you can directly access member
variables). After the double values have been printed out, free the Stack by removing all
elements with the pop() function. When the stack is empty, call the cleanup() function.
*/

int main(){
    Stack stack;
    stack.initialize();

	string name = "input.txt";
	ifstream in(name);
	double* line = new double;
	while (in >> *line)
	{
		stack.push(line);
        line = new double; 
	}
    delete line;

   while (stack.peek() != 0 )
   {
       cout << *((double *)stack.pop()) << endl;
   }
	
	stack.cleanup();
}