#include <iostream>
#include <cmath>
using namespace std;

float distance(int x1, int y1, int x2, int y2)
{
    return sqrt((x2 - x1) * (x2 - x1) +
                (y2 - y1) * (y2 - y1));
}

int main()
{
    int x1, y1, x2, y2;

    cout << "Enter first point (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter second point (x2 y2): ";
    cin >> x2 >> y2;

    cout << "Distance = " << distance(x1, y1, x2, y2) << endl;

    return 0;
}



/*
Write an Expression for finding Distance between 2 point
parameters
x1,y1 -- first point
x2,y2 -- second point
*/