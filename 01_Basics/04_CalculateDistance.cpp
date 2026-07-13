#include <iostream>
using namespace std;

float CalculateDistance(int u, int v, int a)
{
    return (v * v - u * u) / (2.0f * a);
}

int main()
{
    int u, v, a;

    cout << "Enter initial velocity (u): ";
    cin >> u;

    cout << "Enter final velocity (v): ";
    cin >> v;

    cout << "Enter acceleration (a): ";
    cin >> a;

    cout << "Distance = " << CalculateDistance(u, v, a) << endl;

    return 0;
}

/*
Write an expression for calculating Distance
parameters are
u -- initial velocity
v -- final velocity
a -- acceleration
*/