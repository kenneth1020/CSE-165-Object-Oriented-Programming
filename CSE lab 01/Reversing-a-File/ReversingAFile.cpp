#include <string> 
#include <iostream> 
#include <fstream> 
#include <vector>
using namespace std;

void readFile(string name);
void readFileBackward(string name);

int main() {
    string testFileName = "word.txt";
    readFile(testFileName);

    string codeFileName = "code.cpp";
    readFile(codeFileName);
    cout << "===== Break ====" << endl;
    cout << "Reading it but number reverse \n";
    readFileBackward(codeFileName);
}

void readFile(string name){
  vector<string> v;
    ifstream in(name);
    string line;
    while (getline(in, line)) //getline returns true if read successfully
    v.push_back(line); // Add the line to the end of v // Add line numbers:
    for(int i = 0; i < v.size(); i++)
        cout << i << ": " << v[i] << endl;
}

void readFileBackward(string name){
  vector<string> v;
    ifstream in(name);
    string line;
    while (getline(in, line)) //getline returns true if read successfully
    v.push_back(line); // Add the line to the end of v // Add line numbers:
    for(int i = v.size()-1; i >= 0; i--)
        cout << i << ": " << v[i] << endl;
}