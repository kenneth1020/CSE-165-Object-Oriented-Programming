#include <iostream>
#include <algorithm>
#include <fstream>

//Write a program that reads in an integer and outputs ”POSITIVE” if the integer is positive
//and ”NEGATIVE” if it is negative, and ”ODD” if the integer is odd and ”EVEN” if the
//integer is even.

using namespace std;
int main() {
    bool truth = true;
    //end of while loop
    while(truth == true){
    //reading user input of interger
    std::cout << "Type in an interger?\n";
    //reading the interger as num 
    int num;
    cin >> num;
    //if user used zero a special case
    if (num == 0 ){
    cout << "Number is neither positive or negative. But 0 is even. \n";
    }
    //if number is less than zero must be negative.
    else if( num < 0 ){
        cout << "Number you have input is negative. ";
        num = num *(-1);
        num = num%2; 
        if(num == 0){
            cout << "Number is also even \n";
        }
        else{
            cout << "Number is also odd\n";
        }
    }
    //else than number is positive 
    else{
        cout << "Number you have input is positive. ";
        num = num%2;
      if(num == 0){
            cout << "Number is also even \n";
        }
        else{
            cout << "Number is also odd\n";
        }  
    } 
    cout << "Would you like to exit? Yes/No?\n";
    string answer;
    cin >> answer;
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
    if(answer == "yes"){
        truth = false;
    }

    }//end of while loop

}//end of main 