#ifndef Object_h
#define Object_h

#include <iostream>

using namespace std;

class Object {
    public:

    static int count;
    Object(){
        count++;
    }
    Object(const Object &placeHolder){
        count++;
    }
    ~Object(){
        
    }
};
#endif