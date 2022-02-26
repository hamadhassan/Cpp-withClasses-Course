#include <iostream>
using namespace std;
/*Write a program that declare two parallel array of roll_no and cgpa. Program
should prompt the user to enter roll number and display corresponding cgpa.*/
void find_cgpa(int number);
int roll_no[] = {1, 2, 3, 4, 5};
float cgpa[] = {2.66, 2.78, 3.67, 3.70, 3.75};
int main()
{
    int number;
    cout << "Enter roll number: ";
    cin >> number;
    find_cgpa(number);
}
void find_cgpa(int number)
{
    for (int i = 0; i < 5; i++)
    {
        if (number == roll_no[i])
        {
            cout << "Roll number : " << roll_no[i] << "\t";
            cout << "CGPA : " << cgpa[i];
        }
    }
}