#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void binaryConvert(int);

int main()
{
    vector<int> v;
    int numConvert;
    int temp;
    char letter[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    bool loop = true;

    while (loop == true)
    {
        cout << "enter number" << endl;
        cin >> numConvert;
        int bin = numConvert;
        if (bin == -1)
        {
            loop = false;
            break;
        }
        // calculating by hex
        do
        {
            temp = numConvert % 16;
            //cout << temp << endl;
            v.push_back(temp);
            numConvert = numConvert / 16;
        } while (numConvert != 0);

        // FOR hexadecimal conveter
        for (int i = v.size() - 1; i >= 0; i--)
        {
            if (v[i] >= 10)
            {
                cout << letter[v[i] - 10];
            }
            else
            {
                cout << v[i];
            }
        }
        cout << endl;
        // For binary using the hex numbers
        binaryConvert(bin);
        cout << endl;
    } // end of while loop
} // end of main

void binaryConvert(int n)
{
    if (n / 2 != 0)
    {
        binaryConvert(n / 2);
    }
    printf("%d", n % 2);
    
}