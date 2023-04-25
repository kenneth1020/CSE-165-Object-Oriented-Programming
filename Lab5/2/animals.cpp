#include <iostream>
#include "Dog.h"

using namespace std;

int main(int argc, const char * argv[])
{
    string dogName;
    int dogAge;
    cout << "Please give me your dog name." << endl;
    cin >> dogName;
    cout <<"Please give me your dog age." << endl;
    cin >> dogAge;
    
    Dog myDog = Dog(dogName, dogAge);
    
    cout << myDog.getName() << " is " << myDog.getAge() << " years old." << endl;
    myDog.feed();
    return 0;
}
