#include <iostream>
#include <fstream>
#include <bitset>
#include <cassert>
using namespace std;

void getBit(int, int);
void setBit(int, int);
void clearBit(int, int);

int main()
{
    cout << "Give me a number mother" <<endl;
    int inputNum;
    cin >> inputNum;
    cout << "Give me a index father" << endl;
    int index;
    cin >> index;
    std::bitset<8> binary(inputNum);
    cout << "Binary representation of " << inputNum << " is: " << binary << endl;   
    getBit(inputNum, index);
    setBit(inputNum, index);
    clearBit(inputNum, index);
}


void getBit(int n, int index){
    std::bitset<8> binary(n);
    cout << "Get bit at Position " <<index << "; " << binary[index] << endl;
}

void setBit(int n, int index){
    std::bitset<8> binary(n);
    binary[index] = 1;
    cout << "Binary representation after setting bit at position " << index << ": " << binary << endl;

}

void clearBit(int n, int index){
    std::bitset<8> binary(n);
    binary[index] = 0;
     cout << "Binary representation after clearing bit at position " << index << ": " << binary << endl;
}