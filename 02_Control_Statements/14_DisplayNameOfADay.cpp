/*
Display Name of a Day
Display Day name for a given Day number
function DayName(int day)

1 -- sun
2 -- mon
3 -- tue
4 -- wed
5 -- thu
6 --fri
7 -- sat
*/

#include <iostream>
using namespace std;

void DayName(int day)
{
    // Display day name using switch
    switch (day)
    {
        case 1:
            cout << "sun";
            break;

        case 2:
            cout << "mon";
            break;

        case 3:
            cout << "tue";
            break;

        case 4:
            cout << "wed";
            break;

        case 5:
            cout << "thu";
            break;

        case 6:
            cout << "fri";
            break;

        case 7:
            cout << "sat";
            break;

        default:
            cout << "invalid day number";
    }
}

int main()
{
    int day;

    cout << "Enter day number (1-7): ";
    cin >> day;

    DayName(day);

    return 0;
}