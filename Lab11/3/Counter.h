#include <iostream>

using namespace std;

class Counter {
    
    static int counting;

public:

    int ID;

    Counter() : ID(counting++) {
        //cout << ID << " created" << endl;
    }

    ~Counter() {
        //cout << ID << " destroyed" << endl;
    }
    
    void* operator new(size_t size) {
        //cout << "new" << endl;
        void *pointer = malloc(size);
        return pointer;
    }

    void operator delete(void *pointer) {
        //cout << "delete" << endl;
        free(pointer);
    }

    void* operator new[](size_t size) {
        cout << "new " << size / sizeof(Counter)+1; 
        cout << " counters starting at " << counting << endl;
        void *pointer = malloc(size);
        return pointer;
    }

    void operator delete[](void *pointer) {
        cout << "delete counters " << endl;
        free(pointer);
    }

};