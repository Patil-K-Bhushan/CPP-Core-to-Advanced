/*
Finding maximum of 3 numbers
Write nested if conditions to find maximum of three numbers
parameters of Max3(int a, int b, int c)
a,b and c are 3 numbers

output
print greatest number
*/

#include <iostream>
using namespace std;

void Max3(int a, int b, int c)
{
    // Nested if statements to print the maximum of 3 numbers
    if (a > b && a > c)
    {
        cout << a;
    }
    else
    {
        if (b > c)
        {
            cout << b;
        }
        else
        {
            cout << c;
        }
    }
}

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "Maximum = ";
    Max3(a, b, c);

    return 0;
}