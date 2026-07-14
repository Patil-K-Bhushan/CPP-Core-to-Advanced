/*
Nature of Quadratic Roots
Write nested if statements for printing Nature of Roots of Quadratic equation and also root
find discriminant
d=b^2-4ac
if d=0 then roots are real and equal
if d>0 roots are real but unequal
if d<0 then riots are imaginary
function Roots(float a ,float b, float c)

output
cout<<"real and equal "<<r1;
cout<<"real and unequal "<<r1<<" "<<r2;
cout<<"imaginary";
*/

#include <iostream>
#include <cmath>
using namespace std;

void Roots(float a, float b, float c)
{
    float d, r1, r2;

    d = b * b - 4 * a * c;

    if (d == 0)
    {
        r1 = -b / (2 * a);
        cout << "Real and Equal Roots: " << r1;
    }
    else if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);

        cout << "Real and Unequal Roots: " << r1 << " " << r2;
    }
    else
    {
        cout << "Imaginary Roots";
    }
}

int main()
{
    float a, b, c;

    cout << "Enter coefficients (a b c): ";
    cin >> a >> b >> c;

    Roots(a, b, c);

    return 0;
}