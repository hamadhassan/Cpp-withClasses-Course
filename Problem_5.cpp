#include <iostream>
using namespace std;
int main()
{
    /*A teacher wants to calculate the students marks percentage, teachers have 5 subject marks for every
    student. He needs a program that automates this process by asking 5 subjects' marks from the user and
    calculating the percentage of students. Total marks are 500 for 5 subjects. To guide the user, first you
    need to display a message and then take input from the user. Do it for all 5 subjects.*/
    string name;
    float n1, n2, n3, n4, n5, total;
    cout << "Enter your name:";
    cin >> name;
    cout << "Enter 1st subject marks:";
    cin >> n1;
    cout << "Enter 2nd subject marks:";
    cin >> n2;
    cout << "Enter 3rd subject marks:";
    cin >> n3;
    cout << "Enter 4th subject marks:";
    cin >> n4;
    cout << "Enter 5th subject marks:";
    cin >> n5;
    total = n1 + n2 + n3 + n4 + n5;
    total = total / 500 * 100;
    cout << name << " obtained marks in percentage is:" << total << "%";
}