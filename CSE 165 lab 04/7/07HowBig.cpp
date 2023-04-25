/*
Write a piece of code that prints the size of the structures specified below, in the order
they appear.
• containing 1 char and 1 double
• 2 chars and 1 double
• 3 chars and 1 double
• 4 chars and 1 double
• an empty struct
• 1 char, followed by 1 int and then 1 char
• 2 chars followed by 1 int
*/
#include <iostream>
using namespace std;
struct big1
{
    char a;
    double test;
};

struct big2
{
    char b, c;
    double test;
};

struct big3
{
    char e, f, g;
    double test;
};

struct big4
{
    char h, i, j, k;
    double test;
};

struct bigEmpty
{

};

struct big5
{
    char l;
    int b;
    char m;
};

struct big6
{
    char o, p;
    int c;
};


int main(){
cout << sizeof(big1) <<endl;
cout << sizeof(big2) <<endl;
cout << sizeof(big3) <<endl;
cout << sizeof(big4) <<endl;
cout << sizeof(bigEmpty) <<endl;
cout << sizeof(big5)<<endl;
cout << sizeof(big6) <<endl;
}