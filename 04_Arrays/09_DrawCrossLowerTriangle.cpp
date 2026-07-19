/*
Draw cross Lower Triangle of *
Draw a pattern of * for given dimensions given below

        *
      * *
    * * *
  * * * *
* * * * *
*/

#include <iostream>
using namespace std;

void Draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j >= n - 1)
                cout << "* ";
            else
                cout << "  ";
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