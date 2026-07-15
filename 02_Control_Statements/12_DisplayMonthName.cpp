/*
Display Month Name
Display Name of a Month for a given Month number
function MonthName(int m)

1 -- jan
2 -- feb
3 -- mar
4 -- apr
5 -- may
6 -- jun
7 -- jul
8 -- aug
9 -- sep
10 -- oct
11 -- nov
12 -- dec
*/

#include <iostream>
using namespace std;

void MonthName(int m)
{
    if (m == 1)
        cout << "jan";
    else if (m == 2)
        cout << "feb";
    else if (m == 3)
        cout << "mar";
    else if (m == 4)
        cout << "apr";
    else if (m == 5)
        cout << "may";
    else if (m == 6)
        cout << "jun";
    else if (m == 7)
        cout << "jul";
    else if (m == 8)
        cout << "aug";
    else if (m == 9)
        cout << "sep";
    else if (m == 10)
        cout << "oct";
    else if (m == 11)
        cout << "nov";
    else if (m == 12)
        cout << "dec";
    else
        cout << "invalid month";
}

int main()
{
    int month;

    cout << "Enter month number (1-12): ";
    cin >> month;

    MonthName(month);

    return 0;
}