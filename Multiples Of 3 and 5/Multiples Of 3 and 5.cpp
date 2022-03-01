// Multiples Of 3 and 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Problem 1 on projecteuler.net: Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    //Find the multiples of 3 or 5, then add them to sum
    for (int i = 0; i < 1000; i++)
    {
        if (i % 3 == 0 or i % 5 == 0)
        {
            sum += i;
            //cout << i << " "; // debug output, uncomment to check algorithm
        }
    }
    cout << endl;

    cout << "The sum of all multiples of 3 and 5 under 1000 is " << sum;
}
