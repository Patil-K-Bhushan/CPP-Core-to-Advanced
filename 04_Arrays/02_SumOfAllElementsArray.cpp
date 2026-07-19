/*
Sum of all Elements of Array
Find the Sum of all the elements in an Array
function Sum( )
A -- Array of elements
n -- number of elements

output
cout<<sum;
*/

#include <iostream>
using namespace std;

void Sum()
{
    int A[] = {2, 4, 11, 8, 10, 15, 13};
    int n = 7;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }

    cout << sum;
}

int main()
{
    Sum();
    return 0;
}