#include <iostream>
using namespace std;
struct nameType
{
    int first;
    string last;
};
struct courseType
{
    string name;
    int callNum;
    int credits;
    char grade;
};
struct studentType
{
    nameType name;
    courseType course;
    double gpa;
};
studentType student;
studentType classList[100];
courseType course;
nameType name;
int main()
{
    student.gpa = 3.76;
    student.name.last = "Anderson";
    // classList[1].name = student;//As the complete address of the structure is required So error is occur
    classList[1].name.first = student.name.first;
    // classList[0].callNum = 0; //As the callNum varibale is not defined in any structure So error is occour
    student.name = classList[10].name;
    // course = classList[0];
    course = classList[0].course;
    // cin << classList[0]; // As the use of wrong use of inseration operator and not specifid which structure use and which sub varibale the input store
    cin >> classList[0].course.name;
    for (int j = 0; j < 100; j++)
    {
        classList[j].course = course;
    }
    // classList.name.last = " "; As the class list can only reference of the input not storing the actual data 
    classList->name.last = " ";
    // course.credits = studentType.course.credits;
    course.credits = course.credits;// As the student type is the name of structure So it cannot used when to assign a particular value 
}