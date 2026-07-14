/*
Write conditional statement to find Maximum of 2 numbers
Parameters
x and y are 2 numbers
Expected output: print maximum number, just print a number
*/

#include <iostream>
using namespace std;

void max(int x, int y)
{
    if (x > y)
        cout << x;
    else if (y > x)
        cout << y;
    else
        cout << "Both numbers are equal";
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Maximum = ";
    max(a, b);

    return 0;
}