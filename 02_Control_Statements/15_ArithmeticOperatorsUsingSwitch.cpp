/*
Arithmetic operations using switch
Write switch case for performing Arithmetic operations
function ArithOpt(int x, int y, int choice)
x and y are 2 values

choice
1 -- Add 2 number
2 -- Subtract 2 number
3 -- Multiply 2 number
4 -- Divide 2 numbers
*/


#include <iostream>
using namespace std;

void ArithOpt(int x, int y, int choice)
{
    switch (choice)
    {
        case 1:
            cout << x + y;
            break;

        case 2:
            cout << x - y;
            break;

        case 3:
            cout << x * y;
            break;

        case 4:
            if (y != 0)
                cout << x / y;
            else
                cout << "Division by zero is not allowed";
            break;

        default:
            cout << "Invalid choice";
    }
}

int main()
{
    int x, y, choice;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Enter your choice: ";
    cin >> choice;

    ArithOpt(x, y, choice);

    return 0;
}