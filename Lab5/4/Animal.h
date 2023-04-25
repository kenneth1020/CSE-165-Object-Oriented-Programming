#ifndef LA4_Animal_h
#define LA4_Animal_h

#include <iostream>
#include <string>
#include <vector>

using namespace std;




class Animal {
    string name;
    int age;    
    
public:
    static int count;
    
    Animal(){
        cout << "Creating Generic Animal" << endl;
        name = "Generic Animal";
        age = 0;
        count++;
    }
    
    void display (const vector<Animal*> & list){
        for(int i = 0; i < list.size(); i++){
            cout << list[i]->getName() <<endl;
        }
    }
    
    string getName(){
        return name;
    }
    
    void setName(string name){
        this->name = name;
    }
    
    int getAge(){
        return age;
    }
    
    void setAge(int age){
        this->age = age;
    }
    
    ~Animal(){
        cout << "Deleting Generic Animal" << endl;
    }
    
    void feed(){
        cout << "Some food, please!" << endl;
    }
    
};

#endif
/*
Get the file Animal.h. It contains an Animal class that stores the name and age of an animal. Besides the appropriate
constructors, getters, and setters it has a function called feed() which prints out the message ”Some meal, please!!”.
Dogs are animals too, so we can extend the Animal class to produce a Dog class. We only need to change the
constructors and destructors of the Dog class to print the appropriate messages and we need to change the feed()
function to print a message saying ”A small bone, please!”. Your class should be stored in a file called Dog.h. Your
solution will be tested with the file animals.cpp.*/