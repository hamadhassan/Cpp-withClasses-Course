#include <iostream>
using namespace std;
// Function prototype or deceleration
string maximum(int firstnumber, int secondnumber, int thirdnumber, int fourthnumber); // Maximum number
string minimum(int firstnumber, int secondnumber, int thirdnumber, int fourthnumber); // Minimum number
// Main Function
int main()
{
    /*Write two functions to print the maximum and the minimum number respectively among four
    numbers entered by the user. */
    int n1, n2, n3, n4;
    string resultmax, resultmin;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second  number: ";
    cin >> n2;
    cout << "Enter third number: ";
    cin >> n3;
    cout << "Enter fourth number: ";
    cin >> n4;
    resultmax = maximum(n1, n2, n3, n4); // function called
    cout << "------------------------" << endl;
    cout << resultmax << endl;
    cout << "------------------------" << endl;
    resultmin = minimum(n1, n2, n3, n4); // function called
    cout << resultmin;

    
}

// Function definition
// Maximum number
string maximum(int firstnumber, int secondnumber, int thirdnumber, int fourthnumber)
{
    string result;
    if ((firstnumber > secondnumber) && (firstnumber > thirdnumber) && (firstnumber > fourthnumber))
    {
        result = "Firt number is maximum then others ";
    }
    else if ((secondnumber > firstnumber) && (secondnumber > thirdnumber) && (secondnumber > fourthnumber))
    {
        result = "Second number is maximum then others ";
    }
    else if ((thirdnumber > firstnumber) && (thirdnumber > secondnumber) && (thirdnumber > fourthnumber))
    {
        result = "Third number is maximum then others ";
    }
    else
    {
        result = "Fourth number is maximum then others ";
    }
    return result;
}

// Mainimum number
string minimum(int firstnumber, int secondnumber, int thirdnumber, int fourthnumber)
{
    string result;
    if ((firstnumber < secondnumber) && (firstnumber < thirdnumber) && (firstnumber < fourthnumber))
    {
        result = " Firt number is minimum then others ";
    }
    else if ((secondnumber < firstnumber) && (secondnumber < thirdnumber) && (secondnumber < fourthnumber))
    {
        result = "Second number is minimum then others ";
    }
    else if ((thirdnumber < firstnumber) && (thirdnumber < secondnumber) && (thirdnumber < fourthnumber))
    {
        result = "Third number is minimum then others ";
    }
    else
    {
        result = "Fourth number is minimum then others ";
    }
    return result;
}
