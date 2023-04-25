#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "Sortable.h"
using namespace std;

int main()
{
    Sortable <int> v1;
    int inputNum;
    ifstream in("input1.txt");
    while (in >> inputNum)
    {
        //cout << inputNum << endl;
        v1.push_back(inputNum);
    }
    
    for(int i = 0; i <v1.size(); i++){
        v1.sort();
        cout << v1[i] << " " ;
    }
    cout << endl;
    in.close();
    
    Sortable <char> v2;
    char character;
     ifstream inC("input2.txt");
    while (inC >> character)
    {
        v2.push_back(character);
    }
    for(int i = 0; i <v2.size(); i++){
        v2.sort();
        cout << v2[i] << " " ;
    }
    cout << endl;
    inC.close();

    Sortable <string> v3;
    string s;
    ifstream inS("input3.txt");
    while (inS >> s)
    {
        v3.push_back(s);
    }
    for(int i = 0; i <v3.size(); i++){
        v3.sort();
        cout << v3[i] << " " ;
    }
    cout << endl;
    inS.close();
}
