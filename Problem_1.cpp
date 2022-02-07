#include <iostream>
using namespace std;
// Function prototype or deceleration
string generation(int number, char gender);
// Main Function
int main()
{
    /*Try finding your ancestors and offspring with code.
    Create a function that takes a number x and a character y (‘m’ for male, ‘f’ for female), and returns the
    name of an ancestor (m/f) or descendant (m/f).
    ● If the number is negative, return the related ancestor.
    ● If positive, return the related descendant.
    ● You are generation 0. In the case of 0 (male or female), return "me!" */
    int number;
    char gender;
    string result;
    cout << "Enter the generation number : ";
    cin >> number;
    cout << "Enter the generation gender (m for Male and f for Female) : ";
    cin >> gender;
    result = generation(number, gender); // function called
    cout << result;
}
// Function definition
string generation(int number, char gender)
{ // function body
    string result;

    //-3
    if (number == -3 && gender == 'm')
    {
        result = "great grandfather";
    }
    else if (number == -3 && gender == 'f')
    {
        result = "great grandmother";
    }

    //-2
    else if (number == -2 && gender == 'm')
    {
        result = "grandfather";
    }
    else if (number == -2 && gender == 'f')
    {
        result = "grandmother";
    }

    //-1
    else if (number == -1 && gender == 'm')
    {
        result = "father";
    }
    else if (number == -1 && gender == 'f')
    {
        result = "mother";
    }

    // 0
    else if (number == 0 && gender == 'm')
    {
        result = "me!";
    }
    else if (number == 0 && gender == 'f')
    {
        result = "me!";
    }

    // 1
    else if (number == 1 && gender == 'm')
    {
        result = "son";
    }
    else if (number == 1 && gender == 'f')
    {
        result = "daughter";
    }

    // 2
    else if (number == 2 && gender == 'm')
    {
        result = "grandson";
    }
    else if (number == 2 && gender == 'f')
    {
        result = "granddaughter";
    }

    // 3
    else if (number == 3 && gender == 'm')
    {
        result = "great grandson";
    }
    else if (number == 3 && gender == 'f')
    {
        result = "great granddaughter";
    }
    // Invalid
    else
    {
        result = "Invalid option ";
    }
    return result;
}
