/*
Sum of first N natural number
Write a loop to find sum of first n natural number
function SumOfN(int n)

output
cout<<sum
*/

#include <iostream>
using namespace std;

void SumOfN(int n)
{
    int sum = 0;

    // Find the sum of first n natural numbers
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << sum;
}

int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    SumOfN(n);

    return 0;
}