#include <iostream>
using namespace std;

class Fib{
    public:
        static int secondLast;
        static int last;
        int temp;
    int next(){
        int temp = last;
        last += secondLast;
        secondLast = temp;
        return last;
    }
    int next(bool reset){
        if(reset){
            secondLast = 0;
            last = 1;
        }
        return next();
    }
};