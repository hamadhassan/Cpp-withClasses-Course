#include <iostream>
using namespace std;
/*Challenge#1:
Using Parallel Arrays to enter Names, Exercise Marks and Compute Average of Exercise Marks and
Display*/
const int arraylenght = 5;
string name[arraylenght];
float marks[arraylenght];
// prototype
void storingUserValue();
float average();
// void display();
int main()
{
    float classaverage;
    storingUserValue();
    classaverage = average();
    cout << "Class Average marks is: " << classaverage << "%";
    //  display();
}
void storingUserValue()
{
    for (int i = 0; i < arraylenght; i++)
    {
        cout << "Enter student name : ";
        cin >> name[i];
        cout << "Enter marks : ";
        cin >> marks[i];
    }
}
float average()
{
    float totalMarks;   // store total marks
    float totalAverage; // store total average
    for (int i = 0; i < arraylenght; i++)
    {
        totalMarks += marks[i];
    }
    totalAverage = (totalMarks / 500) * 100;
    return totalAverage;
}
// void display()
// {

// }