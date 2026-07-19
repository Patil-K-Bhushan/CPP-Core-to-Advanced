/*
Draw cross Upper Triangle of *
Draw a pattern of * for given dimensions given below

* * * * *
* * * *
* * *
* *
*
*/

#include <iostream>
using namespace std;

void Draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    Draw(n);

    return 0;
}