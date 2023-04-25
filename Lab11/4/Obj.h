#include <iostream>
#include "Shared.h"
using namespace std;

class Obj : public Shared {
    
public:
    string n;

    Obj(string name) {
        n = name;
        cout << "New " << n << endl;
    }
    ~Obj() {
        cout << "Delete " << n << endl;
    }
};