#include <iostream>
#include <cmath>
using namespace std;

void roots(int a, int b, int c)
{
    float d = b * b - 4 * a * c;
    if (d > 0)
    {
        cout << "Root 1 = " << (-b + sqrt(d)) / (2.0 * a) << endl;
        cout << "Root 2 = " << (-b - sqrt(d)) / (2.0 * a) << endl;
    }
    else if (d == 0)
    {
        cout << "Equal Roots = " << -b / (2.0 * a) << endl;
    }
    else
    {
        cout << "Imaginary Roots" << endl;
    }
}

int main()
{
    int a, b, c;
    cout << "Enter coefficients (a b c): ";
    cin >> a >> b >> c;
    roots(a, b, c);
    return 0;
}

/*
Finding roots of a Quadratic Equation
Write an expression for finding a root of Quadratic equation
*/