#include <iostream>
#include <vector>
#include <fstream>
#include <cctype>
#include <cmath>
#include <algorithm>
using namespace std;
/*
Extend the program from the previous exercise in the following way: after all input strings are read, you will output
for each non-empty entry of V the number of letters in that entry and the number of strings in that entry. In the
following example the same input is used from the previous exercise, and the resulting outputs are pairs for each
index in V. For the first output line, 1 and 1, means there is one string with length 1, for a total of 1 character.
Whereas the fifth output line, there is a 15 and 3, because there are 3 strings that have length 5 for a total of
15 characters. The order of the output is similar to the previous exercise, except this time the output is the total
characters instead of the strings.
*/

int main()
{
    // inclization of variables
    bool truth = true;
    string tempWord;
    string wordle;
    int index;
    std::vector<string> words (10);
    string* p = words.data();
    std::vector<int> numReader (10);
    int* p2 = numReader.data();

    // reading all string until quit
    while (truth == true)
    {
        // cout << "Enter your words" << endl; //checking

        // Reading input from user
        cin >> wordle;
        tempWord = wordle;
        transform(tempWord.begin(), tempWord.end(), tempWord.begin(), ::tolower);
        if(wordle.length() >10){
            continue;
        }
        // cheacking for user input for quit
        else if(tempWord == "quit")
        {
            truth = false;
            break;
        }
        // reading all input words
        else{
        index = wordle.length()-1;
        string store;
        store = wordle + " ";
        p[index] = words[index] + store;
        p2[index] = numReader[index] + 1;
        }
    }

    //print the words
    for(int i =0 ; i < words.size(); i++){
        if(numReader[i] ==0 ){
            continue;
        }
        else{
            cout << (i+1)*numReader[i] << " " << numReader[i] << endl;
        }
    }
}
