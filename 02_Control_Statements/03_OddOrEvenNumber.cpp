/*
Check if Number is Odd or Even
Write conditional statement for checking is a number is positive or negative
function OddEven is taking parameter

parameter
n - a integer number
*/


#include <iostream>
using namespace std;

void OddEven(int n)
{
    if (n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    OddEven(n);

    return 0;
}

