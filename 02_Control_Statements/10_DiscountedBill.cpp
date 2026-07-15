/*
Calculate Discounted Bill Amount
Calculate Discounted Bill Amount
function Discount(float amount)
if amount>=5000 offer 20% discount
if 2000<=amount<5000 offer 10% discount
if amount<2000 offer 5% discount

output
print discounted amount ie. bill amount after discount
*/

#include <iostream>
using namespace std;

void Discount(int amount)
{
    float disAmount;

    if (amount >= 5000)
    {
        disAmount = amount - amount * 20 / 100.0;
        cout << disAmount;
    }
    else
    {
        if (amount >= 2000)
        {
            disAmount = amount - amount * 10 / 100.0;
            cout << disAmount;
        }
        else
        {
            disAmount = amount - amount * 5 / 100.0;
            cout << disAmount;
        }
    }
}

int main()
{
    int amount;

    cout << "Enter purchase amount: ";
    cin >> amount;

    Discount(amount);

    return 0;
}