/*
Check if a number is Armstrong Number
Write a loop to find sum of cubes of digits of a number and check if its Armstrong number
function Armstrong(int n)
ARMSTRONG NUMBER - if the sum of cubes of digits of a number is equal to a number

output
cout<<"armstrong"
cout<<"not a armstrong"
*/

#include <iostream>
using namespace std;

void Armstrong(int n)
{
    int sum = 0, r;
    int m = n;

    // Find sum of cubes of digits
    while (n > 0)
    {
        r = n % 10;
        sum += r * r * r;
        n = n / 10;
    }

    if (sum == m)
        cout << "armstrong";
    else
        cout << "not armstrong";
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Armstrong(n);

    return 0;
}