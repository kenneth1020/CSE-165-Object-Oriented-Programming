/*
You are now going to create a LinkedList structure that will work very similarly to the
Stack structure seen in the book (and used in the previous exercise). The starter code is
provided in LinkedList.h. After you complete the LinkedList.h, create another program
which will use your LinkedList.h similar to the previous exercise. You need to create a file
called input.txt, which contains floating points numbers at each line. Your code should
read in floating point numbers from input.txt, and store them in a LinkedList. Then it
should iterate through the LinkedList, and print out the stored values. Then it should
clear up LinkedList, and free all the dynamically allocated memory.
*/


#include <iostream>
#include <fstream>
#include <string>
#include "LinkedList.h"

using namespace std;



int main(){
	int counter = 0;
	double input_data;
	ifstream in;
	in.open("input.txt");
	//LinkedList link = LinkedList(&input_data,NULL);
	//LinkedList temp = LinkedList(&input_data,NULL);
	LinkedList link;
	LinkedList temp;
	link.initialize();
		while(in >> input_data){
			link.add(new double (input_data));
		}
	link.print();
	while(link.head !=0){
		link.pop();
	}
	
	link.cleanup();

}