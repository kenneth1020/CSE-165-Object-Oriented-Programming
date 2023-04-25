#include <iostream>
#include <vector>
#include <fstream>
#include <cctype>
#include <cmath>
using namespace std;
/*
Write a program that keeps reading in integer values. If an input value is positive, store it in a vector. If the input
value is negative, you will remove all existing values in your vector with the same absolute value. When 0 is read
output the number of entries that remained in the vector and the sum of all entries. Then stop. In the following
example, a sequence of numbers beginning at 1 and ending at 6 are input, followed by a -5, and finally a 0 to stop
reading. The result is the sequence of numbers with the number 5 removed because of the -5 from the input, then
the sum of the remaining values, 16.
*/

int main()
{
    //inciate variables
    int inputNum;
    bool truth = true;

    //reading vector int
    vector<int> numberHold;

    //while truth is true read all interger 
    while(truth == true){
        cin >> inputNum;
        if(inputNum == 0){
            truth = false;
            break;
        }//end of if looop
        if(inputNum < 0){
            for(int k; k < numberHold.size(); k++){
                if(numberHold[k] == abs(inputNum)){
                    numberHold.erase(numberHold.begin()+k);
                }
            }
        }
        numberHold.push_back(inputNum);
    }//end of while loop

    int temp = 0;
    for(int i = 0; i < numberHold.size(); i++){
        if(numberHold[i] <0){
            cout << temp <<endl;
        }
        else{
            cout << numberHold[i] << " " ;
            temp = numberHold[i] + temp;
        }
    }
}