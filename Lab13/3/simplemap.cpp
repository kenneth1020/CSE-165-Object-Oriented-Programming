#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <fstream>

using namespace std;

void printFrequencies(const string &str)
{
	//write your code here
	unordered_map<string, int> map;
	string temp = "";

	stringstream s(str);

	while (s >> temp)
		map[temp]++;

	for (auto& iter : map) {
		cout << "(" << iter.first << ", " << iter.second << "),"; 
	}

}

int main(int argc, char** argv)
{

	std::ifstream ifs("file.txt");
	std::string content((std::istreambuf_iterator<char>(ifs)),(std::istreambuf_iterator<char>()));
	
	printFrequencies(content);

	return 0;
}