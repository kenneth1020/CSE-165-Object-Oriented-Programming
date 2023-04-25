#include <iostream>
#include <vector>
#include <fstream>
#include <cctype>
#include <cmath>
#include <algorithm>
using namespace std;
/*
Write a program where you keep reading strings from the input, and then: if the number of characters is four or
more, you will store the string in a vector; if the number of characters is less than or equals to three, you will find
the strings which begin with the input string in the vector of strings, and then you will output the found strings.
Stop when string ”quit” is read. String ”quit” should not be processed. If no match is found, continue reading. In
the following example, a sequence of five strings, each with more 3 characters, are read, followed by a 3 character
string, then the ’quit’ to stop reading. The output prints all the strings that were read up to that point, that begin
with the same characters as the 3 character string, ”Hel”. Note the matching of strings should be case insensitive,
so if in the example we matched ”hel” with a lowercase ”h”, it should produce the same result.
*/
#include <iostream>
#include <vector>
#include <fstream>
#include <cctype>
#include <algorithm>
using namespace std;

void printing(vector<string>, int[]);

int main()
{
    // inclization of variables
    vector<string> words;
    vector<string> printList(10);
    string wordle;
    bool truth = true;
    string tempWord;
    int counter = 0;
    // Reading while until read quits
    while (truth == true)
    {
        // cout << "Enter your words" << endl; //checking

        // Reading input from user
        cin >> wordle;

        // cheacking for user input for quit
        tempWord = wordle;
        transform(tempWord.begin(), tempWord.end(), tempWord.begin(), ::tolower);
        if (tempWord == "quit")
        {
            truth = false;
            break;
        }

        // checking if user has type in a char
        if (wordle.length() <= 3)
        {
            // creating a lower case char of user input
            string compare = wordle.substr(0, wordle.length());
            transform(compare.begin(), compare.end(), compare.begin(), ::tolower);
            //cout << compare << " ================" << endl;
            // compare user char to vector list char
            for (int i = 0; i < words.size(); i++)
            {
                string temp = words[i].substr(0, wordle.length());
                transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
                //cout << temp << " ================" << endl;
                if (temp == compare)
                {
                    // cout << words[i] << endl; //checking for output
                    string temp2;
                    temp2 = words[i] + " ";
                    printList[counter] = printList[counter] + temp2; // adding printList of matching char
                }                                                    // end of if statement temp == compare
            }                                                        // end for loop of i
            counter++;
        } // end of wordle.length() == 1

        // put words into the lists
        else
        {
            words.push_back(wordle);
        }
    } // end of while loop

    // print all the save char recorded by user request
    for (int i = 0; i < printList.size(); i++)
    {
        if (printList[i] == "")
        {
            continue;
        }
        else
        {
            cout << printList[i] << endl;
        }
    }
} // end of main