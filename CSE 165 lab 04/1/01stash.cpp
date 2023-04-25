#include <iostream>
#include <cassert>
#include <fstream> 
#include "Stash.h"
using namespace std;
/*
Consider the file Stash.h. This file contains the Stash data structure from Chapter 4 of
the textbook. Your task is to write a program that declares an instance of Stash, fills
it up with double numbers and then prints out the numbers. You have to use the Stash
member functions to complete this exercise. You need to create a file called input.txt,
which contains floating points numbers at each line. Your program should read in these
values, store them in a Stash object and print out the values. After the floating points
values have been printed out, use the appropriate member function of Stash to free up the
memory your object occupied.
*/

int main()
{
	Stash stash;
	stash.initialize(sizeof(double));

	string name = "input.txt";
	ifstream in(name);
	double* line = new double;
	while (in >> *line)
	{					 
		stash.add(line); 
	}
	delete line;

	for (int i = 0; i < stash.count(); i++)
		cout << *((double *)stash.fetch(i)) << endl;

	stash.cleanup();
} // end of main
