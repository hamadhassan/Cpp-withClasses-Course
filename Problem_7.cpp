#include <iostream>
using namespace std;
int main()
{
    /* A hotel offers two types of rooms: studio and apartment. Prices are in dollars ($). Write a program that
calculates the price of the whole stay for a studio and apartment. Prices depend on the month of the
stay:
May and October June and September July and August
Studio- 50$ / per night Studio - 75$ / per night Studio 76$ / per night
Apartment - 65$ / per
night
Apartment - 68$ /per night Apartment - 77$ / per night
The following discounts are also offered:
● For a studio, in case of more than 7 stays in May and October: 5% discount.
● For a studio, in case of more than 14 stays in May and October: 30% discount.
● For a studio, in case of more than 14 stays in June and September: 20% discount
For an apartment, in case of more than 14 stays, no limitation regarding the month: 10%
discount.
Input Data
The input data is read from the console and contains exactly two lines:
● The first line contains the month – May, June, July, August, September or October.
● The second line is the number of stays – integer within the range [0 … 200].
Output Data
Print the following two lines on the console:
● On the first line: "Apartment: { price for the whole stay }$."
● On the second line: "Studio: { price for the whole stay }$."*/

    string month;
    int day;
    float price, total, dis;
    price = total = dis = 0.0;
    char option;
    cout << "Select the hostel type (Press S for Studio and A for Apartment)....";
    cin >> option;
    cout << "Enter the month name : ";
    cin >> month;
    cout << "Enter the stay days : ";
    cin >> day;
    //Studio Option
    if (option == 'S' || option == 's')
    {
        if (month == "May" || month == "October")
        {

            if (day >= 0 && day < 7)
            {
                price = 50;
                total = price * day;
            }
            else if (day >= 7 && day <= 14)
            {
                price = 50;
                price = price * day;
                total = price * 0.05;
            }
            else if (day > 14 && day <= 200)
            {
                price = 50;
                price = price * day;
                total = price * 0.30;
            }
        }
        else if (month == "June" || month == "September")
        {

            if (day >= 0 && day <= 14)
            {
                price = 75;
                total = price * day;
            }
            else if (day >= 7 && day < 14)
            {
                price = 75;
                price = price * day;
                total = price * 0.20;
            }
        }
        else if (month == "July" || month == "August")
        {

            price = 76;
            total = price * day;
        }
    }
    // Apartment
    else if (option == 'A' || option == 'a')
    {
        if (month == "May" || month == "October")
        {

            if (day >= 0 && day <= 14)
            {
                price = 65;
                total = price * day;
            }
            else if (day >= 14 && day <= 200)
            {
                price = 65;
                price = price * day;
                total = price * 0.10;
            }
        }
        else if (month == "June" || month == "September")
        {

            if (day >= 0 && day <= 14)
            {
                price = 68;
                total = price * day;
            }
            else if (day >= 14 && day <= 200)
            {
                price = 68;
                price = price * day;
                total = price * 0.10;
            }
        }
        else if (month == "July" || month == "August")
        {

            if (day >= 0 && day <= 14)
            {
                price = 77;
                total = price * day;
            }
            else if (day >= 14 && day <= 200)
            {
                price = 77;
                price = price * day;
                total = price * 0.10;
            }
        }
    }
    else
    {
        cout << "Invalid option...";
    }
    cout << "-----------------------" << endl;
    cout << "Total price will be: " << total<< " $";
}
