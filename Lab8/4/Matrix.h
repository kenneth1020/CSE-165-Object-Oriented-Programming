#ifndef MATRIX_H
#define MATRIX_H
#include <vector>
#include "Sortable.h"
#include <cstring>
#include <cstddef>
#include <string>
#include <iostream>
using namespace std;

// creating the template
template <class T>
class Matrix2 : public Sortable<T>
{
public:
    // Holds and publicization the vector of vector globally
    Sortable<Sortable<T>> m;
    // Inilization the templates
    void Matrix(int row, int column);
    void Print();
    void Sort();
    void Resize(int inputRow);
};

// Creating an Interger Matrix using User infomation
template <class T>
void Matrix2<T>::Matrix(int row, int column)
{
    // int random
    int random;
    // creating vector with user row and column in put
    for (int i = 0; i < row; i++)
    {
        // creating a new vector: v1 to insert in our vector of a vector: m
        Sortable<T> v1;
        for (int j = 0; j < column; j++)
        {
            // creating random number 0-100
            random = rand() % 101;
            v1.push_back(random);
        }
        // Push the v1 into m
        m.push_back(v1);
    }
}

// Matrix for Character. For a special case when user want char Matrix
template <>
void Matrix2<char>::Matrix(int row, int column)
{
    // creating the matrix for Char
    for (int i = 0; i < row; i++)
    {
        // create a new vector v1: with char.
        Sortable<char> v1;
        for (int j = 0; j < column; j++)
        {
            // creating 'a'
            char random = 'a';
            int r = rand() % 26; // create random number 1-25
            random = random + r; // Add a with 25 to create random char a-z
            v1.push_back(random);
        }
        m.push_back(v1); // push vector of char into m
    }
}

// Sorting the Matrix
template <class T>
void Matrix2<T>::Sort()
{
    // creating a array that hold all matrix values
    int row = m.size();
    int column = m[0].size();
    Sortable<T> disorder;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            disorder.push_back(m[i][j]);
        }
    }
    // clear and clean out the m
    m.clear();
    // sort the array
    disorder.sort();
    int counter = 0;
    // put it back in matrix form
    for (int i = 0; i < row; i++)
    {
        Sortable<T> v1;
        for (int j = 0; j < column; j++)
        {
            v1.push_back(disorder[counter++]);
        }
        m.push_back(v1);
    }
}

// Printing out the matrix
template <class T>
void Matrix2<T>::Print()
{
    // reading every row
    for (int i = 0; i < m.size(); i++)
    {
        // reading every column
        for (int j = 0; j < m[i].size(); j++)
        {
            cout << m[i][j] << " ";
        }
        // Space out every row matrix
        cout << endl;
    }
    // Space out the whole matrix when done
    cout << endl;
}

// Resize the matrix
template <class T>
void Matrix2<T>::Resize(int inputRow)
{
    // keep track row and sizes of orignal matrix
    int inputColumn = 1;
    int row = m.size();
    int column = m[0].size();
    bool truth = false;
    // creating variables
    int check;
    // checking if matrix is possible for resizing
    check = row * column;
    int temp = check % inputRow;
    cout << temp<< endl;
    // if matrix cant be resize give error message
    if ( temp != 0)
    {
        cout << "ERROR resizing is not possible" << endl;
    }
    // if matrix can be resize
    else
    {
        inputColumn = check /inputRow;
        // Turning matrix into an array
        Sortable<T> disorder;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                disorder.push_back(m[i][j]);
            }
        }
        // clean out the old matrix
        m.clear();
        // sort the array
        int counter = 0;
        // put it back in matrix form
        for (int i = 0; i < inputRow; i++)
        {
            Sortable<T> v1;
            for (int j = 0; j < inputColumn; j++)
            {
                v1.push_back(disorder[counter++]);
            }
            m.push_back(v1);
        }

    } // end of else
} // end of resize
#endif