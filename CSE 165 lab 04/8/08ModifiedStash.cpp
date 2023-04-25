/*
In the following exercise you will again use the Stash structure, however with two modifi-
cations:
(a) you will have a new integer member to store the desired increment to be used during
re-allocation (not a fixed 100 value as in the book)
(b) you will have another integer member variable to count the number of re-allocations
(calls to the inflate method) the Stash structure needed during its use.
You will now write a variation of the run-length encoder you wrote in the previous lab
using the Stash structure with each entry being one character.
First of all you will read as input an integer that will tell how much the Stash should use
as increment. Then you will read a sequence of pairs, each pair containing a character and
a number. For each pair (C,N), add to a Stash object the character C, N times without
spaces. If a pair has a negative N number, then add the character C, |N| times and then
add a newline character (’\n’). If a pair (&,99) is read, then stop reading values, print the
elements in the Stash in the order received, and then print two numbers: the number of
calls that were made to inflate() inside your Stash object, and the total size in bytes that
was allocated by the Stash object at the end (the value of the quantity variable).
*/
#include <iostream>
#include <fstream>
#include <string>
#include "Stash.h"
using namespace std;

int main()
{
    //creating Stash
    Stash stash;
    //creating the byte sizes called limit
    int limit;
    cin >> limit;
    //initialize the sizes limit * sizeof(char)
    stash.initialize(limit * sizeof(char));

    bool truth = true;
    int num;
    char chara;
    int tempPlace;
    char b= '\n';
    while (truth == true)
    {
        cin >> chara;
        cin >> num;
        //if num is lower than 0
        tempPlace = num;
        num = abs(num);
        //exit statement
        if (num == 99 && chara == '&')
        {
            truth = false;
            break;
        }
        //copy statement
        else
        {
            for (int i = 0; i < num; i++)
            {
                stash.add(&chara,limit);
            }
        }

        if (tempPlace < 0)
        {
            stash.add(&b,limit);
        }
    }

    for (int i = 0; i < stash.count(); i++)
    {
        cout << *((char *)stash.fetch(i));
    }
    cout << endl;
    cout << stash.countInflate << endl;
    cout << stash.quantity << endl;
    stash.cleanup();
}