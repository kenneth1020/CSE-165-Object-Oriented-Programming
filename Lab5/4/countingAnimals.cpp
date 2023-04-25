#include <iostream>
#include "Animal.h"

using namespace std;

int Animal::count = 0;

int main(int argc, const char * argv[])
{
    
    Animal myAnimal;
    Animal anotherAnimal;
    
    cout << Animal::count << endl;
    return 0;
}

/*
Modify the Animal class used in previous exercises by adding a variable named count. This variable should store the
number of instances of the Animal object that have been created in the program countingAnimals.cpp.4
*/