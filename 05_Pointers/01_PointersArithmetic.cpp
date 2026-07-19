/*
Pointer Arithmetic
Perform Arithmetic operations of pointer
*/

#include <iostream>
using namespace std;

void PointerArith()
{
    int A[] = {2, 4, 6, 8, 10, 12};
    int *p = A;

    p++;
    cout << *p << endl;

    p = p + 3;      // p now points to 10

    cout << p[-4];  // Prints 2
}

int main()
{
    PointerArith();
    return 0;
}