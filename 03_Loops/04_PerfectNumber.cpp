/*
Check if a number is Perfect Number
Write a loop to check if a number is perfect number
PERFECT NUMBER - sum of the factors of number is double the number
function Perfect(int n)

output
cout<<"perfect"
cout<<"not perfect"
*/

#include <iostream>
using namespace std;

void Perfect(int n)
{
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        cout << "perfect";
    else
        cout << "not perfect";
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Perfect(n);

    return 0;
}