#include <iostream>
#include <cmath>
using namespace std;
double QuraditicFormula(float a, float b, float c); // Function Prototype or function deceleration
int main()
{
    /*Just put the values of a, b and c into the Quadratic Formula, and do the calculations. */
    float a, b, c;
    double x;
    a = 5;
    b = 6;
    c = 1;
    x = QuraditicFormula(a, b, c); // Fuction calling 
    cout << x;
}
// User difined function

double QuraditicFormula(float a, float b, float c) // Function Definition
{                                                  // Function Body
    double result;
    result = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    return result;
}
