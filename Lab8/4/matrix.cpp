#include <iostream>
#include "Matrix.h"
#include <vector>
using namespace std;

void GUI();
void MatrixMaker(int row, int column);
void CharM(int row, int column);
void IntM(int row, int column);
//void IntM();
int main()
{   
    GUI();
    /*
    //all variables
    int row, column;
    row = 3;
    column = 4;
    //creating a vector interger and go through check list
    Matrix<int> m1;
    m1.Matrix(row,column);
    m1.Print();
    m1.Sort();
    m1.Print();
    m1.Resize(2,5);
    m1.Print();
    m1.Resize(2,6);
    m1.Print();
    //create a vector of char and go through check list
    Matrix<char> m2;
    m2.Matrix(row,column);
    m2.Print();
    m2.Sort();
    m2.Print();
    m1.Resize(2,5);
    m1.Print();
    m1.Resize(2,6);
    m1.Print();
    */
}

void GUI(){
    cout << "Please type your Row size: " << endl;
    int inputrow;
    cin >> inputrow;
    cout << "Please type your Column size: " << endl;
    int inputColumn;
    cin >> inputColumn;
    MatrixMaker(inputrow,inputColumn);
}

void MatrixMaker(int row, int column){
    cout << "Would you like Matrix in Char or Interger? Use c || i " << endl;
    char inputAnswer;
    cin >> inputAnswer;
    if (inputAnswer == 'c'){
        CharM(row, column);
    }
    else if(inputAnswer == 'i'){
        IntM(row,column);
    } 
    else{
        cout << "Sorry, input is invalid! RESETING" << endl;
        MatrixMaker(row, column);
    }
}

void CharM(int row, int column){
    Matrix2<char> m2;
    cout << "Creating matrix. . ." << endl;
    m2.Matrix(row, column);
    m2.Print();
    bool truth = true;
    char inputAnswer;
    while (truth == true){
    cout << "Would you like to Resize, Sort, Remake a Matrix, Print, or END" << endl;
    cout << "Input: R (Resize) S (Sort) M (Remake a Matrix) P (Print) E (End)" <<endl;
    cin>> inputAnswer;
    if (inputAnswer =='R'){
        cout << "Please type your Row size: " << endl;
        int inputrow;
        cin >> inputrow;
        m2.Resize(inputrow);
    }
    else if(inputAnswer == 'S'){
        m2.Sort();
    }
    else if(inputAnswer == 'M'){
        truth = false;
        GUI();
    }
    else if(inputAnswer == 'P'){
        m2.Print();
    }
    else if(inputAnswer == 'E'){
        truth = false;
        cout << "Program has ENDED" << endl;
    }
    else {
        cout <<"Invalid INPUT" << endl;
 
       }   
    }   
}

void IntM(int row, int column){
    Matrix2<int> m1;
    cout << "Creating matrix. . ." << endl;
    m1.Matrix(row, column);
    m1.Print();
    bool truth = true;
    char inputAnswer;
    while (truth == true){
    cout << "Would you like to Resize, Sort, Remake a Matrix, Print, or END" << endl;
    cout << "Input: R (Resize) S (Sort) M (Remake a Matrix) P (Print) E (End)" <<endl;
    cin>> inputAnswer;
    if (inputAnswer =='R'){
        cout << "Please type your Row size: " << endl;
        int inputrow;
        cin >> inputrow;
        m1.Resize(inputrow);
    }
    else if(inputAnswer == 'S'){
        m1.Sort();
    }
    else if (inputAnswer == 'M'){
        GUI();
        truth = false;
    }
    else if (inputAnswer == 'P'){
        m1.Print();
    }
    else if (inputAnswer == 'E'){
        truth = false;
        cout << "Program has ENDED" << endl;
    }
    else {
        cout <<"Invalid INPUT" << endl;
    }

    }
}