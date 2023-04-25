#include <iostream>
using namespace std;

class Monitor{
    public:
    static int count;
    static void incident(){
        count++;
    }
    static void print(){
        cout <<"count: " << count << endl;
    }
};