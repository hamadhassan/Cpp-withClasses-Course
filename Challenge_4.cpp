#include <iostream>
using namespace std;
void eligibility(int age); // Function prototype or deceleration
int main()
{
    /* A person is eligible to vote if his/her age is greater than or equal to 18. Define a function to find
    out if he/she is eligible to vote.*/
    int age;
    cout << "Enter the age : ";
    cin >> age;
    eligibility(age); // function called
}
// Function definition
void eligibility(int age)
{ // function body
    if (age >= 18)
    {
        cout << "Eligibile for vote ";
    }
    else
    {
        cout << "Not eligibile for vote ";
    }
}
