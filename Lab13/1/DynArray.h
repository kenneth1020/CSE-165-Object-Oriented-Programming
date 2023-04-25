#include <iostream>

using namespace std;

template<class T>
class DynArray{
    
    T* arr;
    int s;
    int capacity;
    
public:    
    DynArray(){
        capacity =10;
        arr = new T[capacity];
        s = 0;
    }

    ~DynArray(){
        delete[] arr;
    }

    void add(T temp){
        if (s == capacity){
            capacity *=2;
            T* tempArr = new T[capacity];
            for(int i = 0; i < s; i++){
                tempArr[i] = arr[i];
            }
            delete[] arr;
            arr = tempArr;
        }
        arr[s++] = temp;
    }

    T operator[](int index){
        return arr[index];
    }

    int size(){
        return s;
    }

};