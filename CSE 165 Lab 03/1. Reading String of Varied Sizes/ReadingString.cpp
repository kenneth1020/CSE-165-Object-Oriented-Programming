/*Write a program that keeps reading in strings of varied sizes. If an input string has length greater than one store it
in a vector. When an input string has length one (a single character) you will output the string stored in your vector
that has the first letter matching the input character. Keep doing this while you read string ”quit”. In the following
example, the user enters four words with more than one letter, followed by the character ”a”. The resulting output
contains all the words previously read that start with the letter ”a”. Note that the string matching should be case
insensitive as seen in the example, the single character is a lowercase ”a”, whereas the matched strings start with
uppercase ”A”. */
#include <iostream>
#include <vector>
#include <fstream>
#include <cctype>
#include <algorithm>
using namespace std;


int main()
{
  //inclization of variables
  vector<string> words;
  vector<string> printList;
  string wordle;
  bool truth = true;
  string tempWord;

  // Reading while until read quits
  while (truth == true)
  {
    // cout << "Enter your words" << endl; //checking
    
    //Reading input from user
    cin >> wordle;
    
    //cheacking for user input for quit
    tempWord = wordle;
    transform(tempWord.begin(), tempWord.end(), tempWord.begin(), ::tolower);
    if (tempWord == "quit")
    {
      truth = false;
      break;
    }

    //checking if user has type in a char
    if (wordle.length() == 1)
    {
      //creating a lower case char of user input
      char compare = tolower(wordle.at(0));
      // compare user char to vector list char
      for (int i = 0; i < words.size(); i++)
      {
        char temp = tolower(words[i].at(0));
        if (temp == compare)
        {
          //cout << words[i] << endl; //checking for output 
          printList.push_back(words[i]); // adding printList of matching char
        }//end of if statement temp == compare
      }//end for loop of i
    }//end of wordle.length() == 1
    
    //put words into the lists
    else
    {
      words.push_back(wordle);
    }
  }//end of while loop


  //print all the save char recorded by user request
  for(int i = 0; i < printList.size(); i++ ){
    cout << printList[i] << endl;
  }
} // end of main
