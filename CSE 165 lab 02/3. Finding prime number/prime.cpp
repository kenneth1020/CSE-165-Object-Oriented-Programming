#include <iostream>
#include <algorithm>
#include <fstream>
#include <math.h>
//Write a program that reads in an integer N and prints out all the prime numbers strictly
//less than N. These should be printed one per line.
using namespace std;

void primeNum(int);

int main()
{
    int num;
    cin >> num;
    if( num > 2){
        cout << 2 << endl;
    }
    if(num >= 3){
    primeNum(num);
    }

} //end of main

void primeNum(int upper)
{
    for(int i = 3; i < upper; i++ )
    {
        bool checkIfAmazonPrime = true;
        for(int j =2; j <i; j++){
            if(i%j == 0){
                checkIfAmazonPrime = false;
                break;
            }
        }
        if(checkIfAmazonPrime == true)
        {
        cout << i << endl; 
        }
    }
    
} //end of void