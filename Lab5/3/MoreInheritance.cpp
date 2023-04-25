#include "Animal.h"
#include "display.h"
#include "Dog.h"
#include <vector>
#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main(){
    vector<Animal*> list;
    char inputValue;
    string animalName;
    int animalAge;
    int sizeList;
    //cout << "Size of list" << endl;
    cin >> sizeList;

    for (int i = 0; i <sizeList; i++){
        //cout << "Types 'A' Animal or 'D' Dog" << endl;
        cin >> inputValue;
        inputValue = toupper(inputValue);
        //cout << "Name of species" << endl;
        cin >> animalName;
        //cout << "Age of species" << endl;
        cin >> animalAge;

        if(inputValue == 'A'){
            list.push_back(new Animal());
            list.at(i)->setName(animalName);
            list.at(i)->setAge(animalAge);
        }
        else if(inputValue == 'D') {
             list.push_back(new Dog());
            list.at(i)->setName(animalName);
            list.at(i)->setAge(animalAge);
        }
        else{
            cout << "ERROR need char value of 'A' or 'D'" << endl;
            i--;
        }
    }
    display(list);
}