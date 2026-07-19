/*
Check if a Number is Prime number
Write a loop to count factors of a number
check if a number is a Prime number
PRIME NUMER -- a number having factors 1 and itself, it will have only 2 factors
function Prime(int n)

output
cout<<"prime"
cout<<"not prime"
*/

#include <iostream>
using namespace std;

void Prime(int n)
{
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }

    if (count == 2)
        cout << "prime";
    else
        cout << "not prime";
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Prime(n);

    return 0;
}