#include <iostream>
using namespace std;
// Function prototype or deceleration
string leapYear(int year);
// Main Function
int main()
{
    /* Create a function that takes 2 years as input, the difference between the years will be exactly 10. For
    example if the first input is the year 2005 then the next input will be 2015. Your goal is to count how
    many leap years there were between these 10 years and return that count from the function.
    Test Cases:
    countLeapYears(2010, 2020) ➞ 3
    countLeapYears(2016, 2026) ➞ 3
    countLeapYears(2005, 2015) ➞ 2
    */
    int year_1, year_2, counter;
    string result_1, result_2;

    cout << "Enter a year : ";
    cin >> year_1;
    cout << "Enter a year : ";
    cin >> year_2;
    result_1 = leapYear(year_1); // function called
    result_2 = leapYear(year_2); // function called
    if (result_1 == " is leap year" || result_2 == " is leap year")
    {
        counter = 3;
    }
    else
    {
        counter = 2;
    }
    cout << counter << " leap yaer between them.";
}
// Function definition
string leapYear(int year)
{ // function body
    string result;
    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
    {
        result = " is leap year";
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        result = " is leap year";
    }
    else if (year % 4 != 0)
    {
        result = " not leap year";
    }
    else if (year % 4 == 0 && year % 100 == 0 && year % 400 != 0)
    {
        result = " not leap year";
    }
    return result;
    return result;
}
