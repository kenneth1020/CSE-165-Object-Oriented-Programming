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

    //reading input until -2
    while (truth == true)
    {
        //reading the user in put 
        cout << "Input char" << endl; //bookmark input
        cin >> inputChar;
        cout << "Input number" << endl; //bookmark number 
        cin >> inputNum;
        // if user type in number -2 break the while loop
        if (inputNum == -2)
        {
            //reading the last input of char and inter
            letterHold.push_back(inputChar);
            numberHold.push_back(inputNum);
            //break out the while loop and make truth false
            truth = false;
            break;
        }//end of if statement of inputNum == -2
        //anything else is fine

        else
        {
            letterHold.push_back(inputChar);
            numberHold.push_back(inputNum);
        }//end of else statement of inputNum == -2
    }//end of while loop

    //print out put for all char and interger 
    for (int i = 0; i < numberHold.size(); i++)
    {
        //checking for exit of -2
        if (numberHold[i] == -2)
        {
            cout << "(program exit)" << endl;
            break;
        }
        //checking if -1 to make blank space
        else if (numberHold[i] == -1)
        {
            cout << endl;
        }
        else
        {
            //outputting numberHold of char 
            for (int j = 0; j < numberHold[i]; j++)
            {
                cout << letterHold[i];
            }//end of for loop of j
            cout << endl;
        }//end of else for if statement of numberHold[i] == -2
    }//end of for loop of i 
}//end of main