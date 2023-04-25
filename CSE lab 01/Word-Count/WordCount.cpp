#include <iostream>
#include <fstream>
#include <vector>

#include <algorithm>
using namespace std;

int main() {
  //here where we coutn the lords words
  int count = 0;
  //we shall ask the gds what they want
  std::cout << "What word you like to count?\n"; 
  string searchWord;
  cin >> searchWord;
  vector<string> words;
  //here we open the bible
 ifstream in("words.txt");
 //here we just create the gossiple
 string word;
 while(in>> word){
   //Here where we remove the useless stuff
  if(word.at(word.length()-1) == ',' || 
    word.at(word.length()-1) =='.' || 
    word.at(word.length()-1) =='?'){
      word = word.substr(0, word.length() - 1);
    }
  //To lower case all the word so it can be easier to search.
  //I reference this video
  //https://www.youtube.com/watch?v=tQWYTU81uAs
  //More to my researching on this problem I used this
  //https://en.cppreference.com/w/cpp/algorithm/transform
  transform(word.begin(), word.end(), word.begin(), ::tolower);
  //here where we shove them into the cart  
  words.push_back(word);
}



//here we intake the word count that the lord has spoken
for(int i = 0; i < words.size(); i++){
transform(searchWord.begin(), searchWord.end(), searchWord.begin(), ::tolower);
  if(words[i] == searchWord)
    count++;
}
//We shall pry out to the heavens
cout <<"Your word: " << searchWord 
<< ". Has occur this many: " << count <<endl;

//this is test coding
//for(int i = 0; i < words.size(); i++)
 // cout <<words[i] <<endl;
}