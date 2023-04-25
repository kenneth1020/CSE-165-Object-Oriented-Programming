#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    cout <<"Give me an int mommy" <<endl;
    int answerNum1;
    cin >> answerNum1;
    int *pointer1;
    cout << "Give me another int mother" <<endl;
    int answerNum2;
    cin >> answerNum2;
    int *pointer2;
    pointer1 = &answerNum1;
    pointer2 = &answerNum2;
    int result;
    result =  *pointer1 * *pointer2;
    cout << "Multiply pointers together: " << result  << endl;
    cout << "Divide pointers together input1/input2: " << *pointer1 / *pointer2 <<  endl;
    cout << "Subtracting pointers together: " << *pointer1 - *pointer2 <<endl;
    cout << "Adding pointers together: " << *pointer1 + *pointer2 <<endl;

}