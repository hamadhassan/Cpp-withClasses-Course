#include <iostream>
using namespace std;
int main()
{
/* */
#pragma region Variable Deceleration

    int n, mod, div;                                                   // user enter number, moddulus of number and divisible of number
    string word, one, two, three, four, five, six, seven, eight, nine; // enter number in english word
    cout << "Enter number between (0-100) : ";
    cin >> n;
    one = "one";
    two = "two";
    three = "three";
    four = "four";
    five = "five";
    six = "six";
    seven = "seven";
    eight = "eight";
    nine = "nine";
#pragma endregion

#pragma region 1 to 19
    if (n == 1)
    {
        word = one;
    }
    else if (n == 2)
    {
        word = two;
    }
    else if (n == 3)
    {
        word = three;
    }
    else if (n == 4)
    {
        word = four;
    }
    else if (n == 5)
    {
        word = five;
    }
    else if (n == 6)
    {
        word = six;
    }
    else if (n == 7)
    {
        word = seven;
    }
    else if (n == 8)
    {
        word = eight;
    }
    else if (n == 9)
    {
        word = nine;
    }
    else if (n == 10)
    {
        word = "ten ";
    }
    else if (n == 11)
    {
        word = "eleven";
    }
    else if (n == 12)
    {
        word = "twelve";
    }
    else if (n == 13)
    {
        word = "thirteen";
    }
    else if (n == 14)
    {

        word = "fourteen";
    }
    else if (n == 15)
    {

        word = "fifteen";
    }
    else if (n == 16)
    {

        word = "sixteen";
    }
    else if (n == 17)
    {

        word = "seventeen";
    }
    else if (n == 18)
    {

        word = "eighteen";
    }
    else if (n == 19)
    {

        word = "ninteen";
    }
#pragma endregion

#pragma region 20 to 29
    // The nummber start from 20 and end at 29
    else if (n >= 20 && n <= 29)
    {

        mod = n % 20;
        div = n / 20;
        word = "twenty";
        if (mod == 0)
        {
            word;
        }
        else if (mod == 1)
        {
            word = word + one;
        }
        else if (mod == 2)
        {
            word = word + two;
        }
        else if (mod == 3)
        {
            word = word + three;
        }
        else if (mod == 4)
        {
            word = word + four;
        }
        else if (mod == 5)
        {
            word = word + five;
        }
        else if (mod == 6)
        {
            word = word + six;
        }
        else if (mod == 7)
        {
            word = word + seven;
        }
        else if (mod == 8)
        {
            word = word + eight;
        }
        else if (mod == 9)
        {
            word = word + nine;
        }
    }
#pragma endregion

#pragma region 30 to 39

    // The nummber start from 30 and end at 39
    else if (n >= 30 && n <= 39)
    {

        mod = n % 30;
        div = n / 30;
        word = "thirty";
        if (mod == 0)
        {
            word;
        }
        else if (mod == 1)
        {
            word = word + one;
        }
        else if (mod == 2)
        {
            word = word + two;
        }
        else if (mod == 3)
        {
            word = word + three;
        }
        else if (mod == 4)
        {
            word = word + four;
        }
        else if (mod == 5)
        {
            word = word + five;
        }
        else if (mod == 6)
        {
            word = word + six;
        }
        else if (mod == 7)
        {
            word = word + seven;
        }
        else if (mod == 8)
        {
            word = word + eight;
        }
        else if (mod == 9)
        {
            word = word + nine;
        }
    }
#pragma endregion

#pragma region 40 to 49
    // The nummber start from 40 and end at 49
    else if (n >= 40 && n <= 49)
    {

        mod = n % 40;
        div = n / 40;
        word = "fourty";
        if (mod == 0)
        {
            word;
        }
        else if (mod == 1)
        {
            word = word + one;
        }
        else if (mod == 2)
        {
            word = word + two;
        }
        else if (mod == 3)
        {
            word = word + three;
        }
        else if (mod == 4)
        {
            word = word + four;
        }
        else if (mod == 5)
        {
            word = word + five;
        }
        else if (mod == 6)
        {
            word = word + six;
        }
        else if (mod == 7)
        {
            word = word + seven;
        }
        else if (mod == 8)
        {
            word = word + eight;
        }
        else if (mod == 9)
        {
            word = word + nine;
        }
    }
#pragma endregion

#pragma region 50 to 59
    // The nummber start from 50 and end at 59
    else if (n >= 50 && n <= 59)
    {

        mod = n % 50;
        div = n / 50;
        word = "fifty";
        if (mod == 0)
        {
            word;
        }
        else if (mod == 1)
        {
            word = word + one;
        }
        else if (mod == 2)
        {
            word = word + two;
        }
        else if (mod == 3)
        {
            word = word + three;
        }
        else if (mod == 4)
        {
            word = word + four;
        }
        else if (mod == 5)
        {
            word = word + five;
        }
        else if (mod == 6)
        {
            word = word + six;
        }
        else if (mod == 7)
        {
            word = word + seven;
        }
        else if (mod == 8)
        {
            word = word + eight;
        }
        else if (mod == 9)
        {
            word = word + nine;
        }
    }
#pragma endregion

#pragma region 60 to 69
    // The nummber start from 60 and end at 69
    else if (n >= 60 && n <= 69)
    {

        mod = n % 60;
        div = n / 60;
        word = "sixty";
        if (mod == 0)
        {
            word;
        }
        else if (mod == 1)
        {
            word = word + one;
        }
        else if (mod == 2)
        {
            word = word + two;
        }
        else if (mod == 3)
        {
            word = word + three;
        }
        else if (mod == 4)
        {
            word = word + four;
        }
        else if (mod == 5)
        {
            word = word + five;
        }
        else if (mod == 6)
        {
            word = word + six;
        }
        else if (mod == 7)
        {
            word = word + seven;
        }
        else if (mod == 8)
        {
            word = word + eight;
        }
        else if (mod == 9)
        {
            word = word + nine;
        }
    }
#pragma endregion

#pragma region 70 to 79
    // The nummber start from 70 and end at 79
    else if (n >= 70 && n <= 79)
    {

        mod = n % 70;
        div = n / 70;
        word = "seventy";
        if (mod == 0)
        {
            word;
        }
        else if (mod == 1)
        {
            word = word + one;
        }
        else if (mod == 2)
        {
            word = word + two;
        }
        else if (mod == 3)
        {
            word = word + three;
        }
        else if (mod == 4)
        {
            word = word + four;
        }
        else if (mod == 5)
        {
            word = word + five;
        }
        else if (mod == 6)
        {
            word = word + six;
        }
        else if (mod == 7)
        {
            word = word + seven;
        }
        else if (mod == 8)
        {
            word = word + eight;
        }
        else if (mod == 9)
        {
            word = word + nine;
        }
    }
#pragma endregion

#pragma region 80 to 89
    // The nummber start from 80 and end at 89
    else if (n >= 80 && n <= 89)
    {

        mod = n % 80;
        div = n / 80;
        word = "eighty";
        if (mod == 0)
        {
            word;
        }
        else if (mod == 1)
        {
            word = word + one;
        }
        else if (mod == 2)
        {
            word = word + two;
        }
        else if (mod == 3)
        {
            word = word + three;
        }
        else if (mod == 4)
        {
            word = word + four;
        }
        else if (mod == 5)
        {
            word = word + five;
        }
        else if (mod == 6)
        {
            word = word + six;
        }
        else if (mod == 7)
        {
            word = word + seven;
        }
        else if (mod == 8)
        {
            word = word + eight;
        }
        else if (mod == 9)
        {
            word = word + nine;
        }
    }
#pragma endregion

#pragma region 90 to 99
    // The nummber start from 90 and end at 99
    else if (n >= 90 && n <= 99)
    {

        mod = n % 90;
        div = n / 90;
        word = "ninty";
        if (mod == 0)
        {
            word;
        }
        else if (mod == 1)
        {
            word = word + one;
        }
        else if (mod == 2)
        {
            word = word + two;
        }
        else if (mod == 3)
        {
            word = word + three;
        }
        else if (mod == 4)
        {
            word = word + four;
        }
        else if (mod == 5)
        {
            word = word + five;
        }
        else if (mod == 6)
        {
            word = word + six;
        }
        else if (mod == 7)
        {
            word = word + seven;
        }
        else if (mod == 8)
        {
            word = word + eight;
        }
        else if (mod == 9)
        {
            word = word + nine;
        }
    }
#pragma endregion

#pragma region 100
    else if (n == 100)
    {
        word = "one hunderd";
    }

    cout << "-------------------------" << endl;
    cout << word;
#pragma endregion
}
