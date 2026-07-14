/*
Number is Positive or Negative
Find if a given number is Positive or Negative
Parameter
n - a integer number

Output
cout<<"positive" or cout<<"negative"
*/


#include <iostream>
using namespace std;

void Sign(int n)
{
    if (n > 0)
        cout << "Positive";
    else if (n < 0)
        cout << "Negative";
    else
        cout << "Zero";
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Sign(n);

    return 0;
}