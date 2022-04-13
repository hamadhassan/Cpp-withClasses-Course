#include <iostream>
using namespace std;
int main()
/* Problem Code: HS08TEST
Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges).
For each successful withdrawal the bank charges 0.50 $US.
Calculate Pooja's account balance after an attempted transaction.*/
{
    float openingBalance, bankCharges, closingBalance;
    int amount;
    closingBalance = 0.0;
    bankCharges = 0.50; // According to question
    amount = 0;
    cout << "Enter amount balance : ";
    cin >> openingBalance;
    cout << "Enter withdraw amount : ";
    cin >> amount;
    if (amount % 5 == 0)
    {
        closingBalance = openingBalance - amount;
        closingBalance = closingBalance - bankCharges;
        if (closingBalance <= openingBalance && closingBalance > 0)
        {
            cout << "Successful Transaction" << endl;
            cout << closingBalance;
        }
        else
        {
            cout << "Insufficient Funds" << endl;
            cout << openingBalance;
        }
    }
    else
    {
        cout << "Incorrect Withdrawal amount" << endl;
        cout << openingBalance;
    }
}