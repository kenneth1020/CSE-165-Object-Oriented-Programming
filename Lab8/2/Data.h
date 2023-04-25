#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <vector>

using namespace std;

class Data
{

    vector<int> arr;

public:
    void add(int n)
    {
        arr.push_back(n);
    }

    void print()
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void sort()
    {
        int key, j, i;
        for(i = 1 ; i < arr.size(); i++){
            key = arr[i];
            j = i -1;
            while (j >= 0 && arr[j] > key){
                arr[j+1] = arr[j];
                j = j -1;
            }
            arr[j+1] = key;
        }
    }
};

#endif