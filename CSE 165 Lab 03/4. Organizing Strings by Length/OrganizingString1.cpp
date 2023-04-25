#include <iostream>
#include <vector>
#include <fstream>
#include <cctype>
#include <cmath>
#include <algorithm>
using namespace std;
/*
Write a program where you will have a vector V where each entry is a pointer to a vector of strings. This means
that each entry in V points to a vector of strings. Your program will then read input strings. For each string, if the
number of characters in the string is N, then add it to the string vector in entry V[N-1]. Be sure to allocate the string
vector in each entry as needed. The input string will have a maximum of 10 characters so you can initialize V with
10 entries. Do not add repeated entries. Stop when string ”quit” is read. String ”quit” should not be processed.
Then output the contents of each V entry in order from V[0] to V[9], separated by spaces within the same V entry
and by a new line when switching to the next entry. Skip empty entries. In the following example a seqeuence of
strings, each less than 10 characters, are read, followed by the string ”quit” to stop reading. The output prints the
strings grouped by character lengths on the same line, starting with length 1, all the way to longest length string,
”happiness”, which has 9 characters.
*/

int main()
{
    // inclization of variables
    bool truth = true;
    string tempWord;
    string wordle;
    int index;
    vector<string> words;

    //incilizes all the words vector
    for(int j =0; j <10; j++){
        words.push_back("");
    }

    // reading all string until quit
    while (truth == true)
    {
        // cout << "Enter your words" << endl; //checking

        // Reading input from user
        cin >> wordle;

        if(wordle.length() >10){
            break;
        }
        // cheacking for user input for quit
        tempWord = wordle;
        transform(tempWord.begin(), tempWord.end(), tempWord.begin(), ::tolower);
        if (tempWord == "quit")
        {
            truth = false;
            break;
        }

        // reading all input words
        index = wordle.length()-1;
        words[index] += wordle + " ";
    }

    //print the words
    for(int i =0 ; i < words.size(); i++){
        if(words[i] == "" ){
            continue;
        }
        else{
            cout << words[i] << endl;
        }
    }
}
