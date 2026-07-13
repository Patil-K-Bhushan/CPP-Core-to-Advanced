#include <iostream>
using namespace std;

float SimpleInterest(int P, int T, int R)
{
    return (P * R * T) / 100.0f;
}

int main()
{
    int P, T, R;

    cout << "Enter Principal (P): ";
    cin >> P;

    cout << "Enter Time (T): ";
    cin >> T;

    cout << "Enter Rate (R): ";
    cin >> R;

    cout << "Simple Interest = " << SimpleInterest(P, T, R) << endl;

    return 0;
}

/*
Write an Expression for calculating Simple Interest
parameters are
P -- principle amount
T -- time
R -- rate of interest
*/