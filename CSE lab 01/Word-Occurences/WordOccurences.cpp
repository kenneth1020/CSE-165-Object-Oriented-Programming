#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
  
 vector<string> words;
 ifstream in("words.txt");
 string word;
 while(in>> word){
    if(word.at(word.length()-1) == ',' || 
    word.at(word.length()-1) =='.' || 
    word.at(word.length()-1) =='?'){
      word = word.substr(0, word.length() - 1);
    }
   words.push_back(word);
 }
cout <<words.size() <<endl;
for(int i = 0; i < words.size(); i++)
  cout <<words[i] <<endl;
}