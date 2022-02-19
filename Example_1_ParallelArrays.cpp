#include <iostream>
using namespace std;
const int length = 5;
string name[length]; // store student name
int roll_no[length]; // store student roll number
float gpa[length];   // store student gpa
// prototype
void store();   // store user enter values
void display(); // dispay user enter values
int main()
{
    int option = -1;
    while (option != 3)
    {
        cout << "Press 1 to store data " << endl;
        cout << "Press 2 to view data" << endl;
        cout << "Press 0 to Exit ...";
        cin >> option;
        if (option == 0)
        {
            break;
        }
        else if (option == 1)
        {
            store();
        }
        else if (option == 2)
        {
            display();
        }
        else
        {
            break;
        }
    }
} // end of main

// definition
void store()
{
    for (int i = 0; i < length; i++)
    {
        cout << "Enter student name : ";
        cin >> name[i];
        cout << "Enter student roll number : ";
        cin >> roll_no[i];
        cout << "Enter GPA : ";
        cin >> gpa[i];
        cout << "------------------" << endl;
    }
} // end of store function
void display()
{
    cout << "Roll number "
         << "\t"
         << "Name "
         << "\t"
         << "GPA" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << roll_no[i] << "\t\t" << name[i] << "\t" << gpa[i] << endl;
    }
} // end of display function