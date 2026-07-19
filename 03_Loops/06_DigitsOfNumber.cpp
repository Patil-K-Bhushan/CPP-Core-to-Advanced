/*
Display Digits of a number
Write a loop to display Digits of a given number in reverse
function Digits(int n)

output
cout<<digit<<" "
*/

#include <iostream>
using namespace std;

void Digits(int n)
{
    int digit;

    // Display digits in reverse order
    while (n > 0)
    {
        digit = n % 10;
        cout << digit << " ";
        n = n / 10;
    }
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Digits(n);

    return 0;
}