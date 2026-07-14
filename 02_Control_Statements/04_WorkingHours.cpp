/*
Check if Working Hours
Write condition to check is given time is Working hours or not
condition
if hour is from 9 to 18 its working hours
otherwise leisure

output
cout<<"working"
cout<<"leisure"
*/

#include <iostream>
using namespace std;

void Working(int hour)
{
    if (hour >= 9 && hour <= 18)
        cout << "working";
    else
        cout << "leisure";
}

int main()
{
    int hour;

    cout << "Enter the hour (0-23): ";
    cin >> hour;

    Working(hour);

    return 0;
}