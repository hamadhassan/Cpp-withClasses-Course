#include <iostream>
using namespace std;
/*Write a program that declare and initialize two parallel arrays, show corresponding
elements and their index one by one*/
// data structure
int rollno[] = {1, 2, 3, 4, 5};
int age[] = {25, 20, 32, 30, 18};
void parralelarray(); // prototype
int main()
{
    parralelarray();
}
// definition
void parralelarray()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Roll Number[" << i << "]" << rollno[i] << "\t"; // first i means the iteration value and second i means arrays index value
        cout << "Age[" << i << "]" << age[i] << endl;
    }
}