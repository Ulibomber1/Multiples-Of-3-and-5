// Multiples Of 3 and 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Problem 1 on projecteuler.net: Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    //Find the multiples of 3 or 5, then putting them into a fixed array. 
    //Any number that is not a multiple of 3 or 5 is defaulted to zero.

    int multiples[1000];
    for (int i = 0; i < 1000; i++)
    {
        if (i % 3 == 0 or i % 5 == 0)
            multiples[i] = i;
        else
            multiples[i] = 0;
        cout << multiples[i] << " ";
    }
    cout << endl;

    //Sum the array to get the answer
    for (int i = 0; i < 1000; i++)
        sum += multiples[i];

    cout << "The sum of all multiples of 3 and 5 under 1000 is " << sum;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
