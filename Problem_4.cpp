#include <iostream>
using namespace std;
int main()
{
    /*Write a Program to display an Astrological sign or a Zodiac sign for a given date of birth. Zodiac Signs
    according to the dates and months
    The program takes the date and month of birth as input, and then displays the astrological sign or Zodiac
    sign according to that input. */

    int day;            //Input day
    string month, sign; // Input month and Output sign of zodiac 
    cout << "Please provide your data of birth..." << endl;
    cout << "Enter Day : ";
    cin >> day;
    cout << "Enter Month name : ";
    cin >> month;
    // conditions 
    if ((month == "March" && day >= 21 && day <= 31) || (month == "April" && day >= 1 && day <= 19))
    {
        sign = "Aries";
    }
    else if ((month == "April" && day >= 20 && day <= 30) || (month == "May" && day >= 1 && day <= 20))
    {
        sign = "Taurus";
    }
    else if ((month == "May" && day >= 21 && day <= 31) || (month == "June" && day >= 1 && day <= 20))
    {
        sign = "Gemini";
    }
    else if ((month == "June" && day >= 21 && day <= 30) || (month == "July" && day >= 1 && day <= 22))
    {
        sign = "Cancer";
    }
    else if ((month == "July" && day >= 23 && day <= 31) || (month == "August" && day >= 1 && day <= 22))
    {
        sign = "Leo";
    }
    else if ((month == "August" && day >= 23 && day <= 31) || (month == "September" && day >= 1 && day <= 22))
    {
        sign = "Virgo";
    }
    else if ((month == "September" && day >= 23 && day <= 30) || (month == "October" && day >= 1 && day <= 22))
    {
        sign = "Libra";
    }
    else if ((month == "October" && day >= 23 && day <= 31) || (month == "November" && day >= 1 && day <= 21))
    {
        sign = "Scorpio";
    }
    else if ((month == "November" && day >= 22 && day <= 30) || (month == "December" && day >= 1 && day <= 21))
    {
        sign = "Sagittarius";
    }
    else if ((month == "December" && day >= 22 && day <= 31) || (month == "January" && day >= 1 && day <= 19))
    {
        sign = "Capricorn";
    }
    else if ((month == "January" && day >= 20 && day <= 31) || (month == "February" && day >= 1 && day <= 18))
    {
        sign = "Aquarius";
    }
    else if ((month == "February" && day >= 19 && day <= 28) || (month == "March" && day >= 1 && day <= 20))
    {
        sign = "Pisces";
    }
    //Output 
    cout << "Zodiac sign is: " << sign;
}
