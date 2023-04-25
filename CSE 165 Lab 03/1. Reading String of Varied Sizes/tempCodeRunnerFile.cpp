#include <iostream>
#include <vector>
#include <fstream>
#include <cctype>
#include <algorithm>
using namespace std;

void printing(vector<string>, int[]);

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