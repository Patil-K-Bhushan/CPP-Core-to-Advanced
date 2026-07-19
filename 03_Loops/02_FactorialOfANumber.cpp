/*
Find Factorial of number
Write a loop to find factorial of number
function Factorial(int n)

output
cout<<fact
*/

#include <iostream>
using namespace std;

void Factorial(int n)
{
    int fact = 1;

    // Find factorial of n
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    cout << fact;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Factorial(n);

    return 0;
}