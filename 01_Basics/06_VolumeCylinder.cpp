#include <iostream>
using namespace std;

float CylinderVolume(int radius, int height)
{
    const float PI = 3.14f;
    return PI * radius * radius * height;
}

int main()
{
    int radius, height;

    cout << "Enter radius: ";
    cin >> radius;

    cout << "Enter height: ";
    cin >> height;

    cout << "Volume of Cylinder = " << CylinderVolume(radius, height) << endl;

    return 0;
}

/*
Write an Expression for calculating Volume of a Cylinder
parameters
radius -- radius of Cylinder
height -- height of Cylinder
take pi=3.14
*/