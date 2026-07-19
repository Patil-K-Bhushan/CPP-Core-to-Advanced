/*
Reverse a Number
Write a loop for Reversing the Digits of a Number
function Reverse(int n)

output
cout<<rev
*/

#include <iostream>
using namespace std;

void Reverse(int n)
{
    int rev = 0;
    int r;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }

    cout << rev;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Reverse(n);

    return 0;
}