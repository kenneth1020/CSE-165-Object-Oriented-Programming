#include <iostream>
#include <vector>
#include <fstream>
#include <cctype>
using namespace std;
/*
Write a simple run-length encoder: you will read a sequence of pairs containing a character and a number. For each
pair (C,N), output the character N times without spaces. When a pair has number -1 print a newline, if the number
is -2 then stop. In the following example, the user enters the first pair, ”h” and 3, which results in the letter ”h”
printing 3 times. The second pair, ”b” and -1, results in a newline being printed. The third pair, ”a” and 2, results
in the letter ”a” printing twice. Finally, the pair ”f” and -2 exits the program.
*/

int main()
{
    //inciate variables
    char inputChar;
    int inputNum;
    bool truth = true;

    //reading vector and string
    vector<char> letterHold;
    vector<int> numberHold;
