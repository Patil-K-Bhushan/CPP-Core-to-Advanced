#include <iostream>
using namespace std;

int SumOfN(int n)
{
    return n * (n + 1) / 2;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Sum of first " << n << " natural numbers = " << SumOfN(n) << endl;
    return 0;
}

/*
Write an expression for finding sum of first n Natural numbers
*/