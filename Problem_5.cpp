#include <iostream>
using namespace std;
// Function prototype or deceleration
void calculateYears(int humanyear);
// Main Function
int main()
{
    /* Mubashir has a cat and a dog. He purchased both of them at the same time humanYears ago. Create a
    function which takes an argument of humanYears and displays (cout) humanYears, catYears, and
    dogYears.
    Human Years
    ● Human Years >= 1
    ● Human Years are whole numbers only.
    Cat Years
    ● 15 cat years for the first year.
    ● +9 cat years for second year.
    ● +4 cat years for each year after that.
    Dog Years
    ● 15 dog years for first year
    ● +9 dog years for second year
    ● +5 dog years for each year after that*/

    int humanyear;
    cout << "Enter year : ";
    cin >> humanyear;
    calculateYears(humanyear); // function called
}
// Function definition
void calculateYears(int humanyear)
{ // function body
    int catyear;
    int dogyear;
    if (humanyear == 0)
    {
        catyear = 0;
        dogyear = 0;
    }
    else if (humanyear == 1)
    {
        catyear = 15;
        dogyear = 15;
    }
    else if (humanyear == 2)
    {
        catyear = 15 + 9;
        dogyear = 15 + 9;
    }
    else if (humanyear >= 3)
    {
        catyear = 15 + 9 + (4 * humanyear);
        dogyear = 15 + 9 + (5 * humanyear);
    }
    cout << "------------------" << endl;
    cout << "Human year : " << humanyear << endl;
    cout << "Cat year   : " << catyear << endl;
    cout << "Dog year   : " << dogyear << endl;
}
