#include <iostream>
using namespace std;
int main()
{
    /* Write a program that asks the user which country he/she lives in. If the country is not “Germany” or
    “Australia”, the program should print out “You should come to visit these sometime!”.*/
    string country = ""; // store country name
    cout << "Enter the country :";
    cin >> country;
    // check conditions
    if (!(country == "Germany" || country == "Australia"))
    {
        cout << "You should come to visit these sometime!";
    }
    else
    {
        cout << "Program End";
    }
}