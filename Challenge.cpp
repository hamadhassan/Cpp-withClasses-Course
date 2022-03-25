#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;
// Prototypes
struct studentType;
struct marksType;
void loadDispayGride();
void gotoxy(int x, int y);
void takeInput();
void storeRecord(string name, string subject, float marks); // store the user record in the linked-list
studentType *getLastRecordStu(studentType *temp);
marksType *getLastRecordMark(marksType *temp);
void printSingleRecordStu(studentType *onerecord);
void printSingleRecordMark(marksType *onerecord);
void displayAllRecords();
// Data structure pre defined
int const xAxix = 25;
int const yAxix = 92;
char gride[xAxix][yAxix];
// Data structure user defined
struct studentType
{
    string name; // name
    studentType *stu_next;
    //  marksType *stuMrk_next;
};
struct marksType
{
    string subject;  // subject
    float subjMarks; // marks
    marksType *mrk_next;
};
studentType *stuHead = NULL;
marksType *mrkHead = NULL;

// Main function
int main()
{
    loadDispayGride();
    while (true)
    {
        takeInput();
        displayAllRecords();
    }
}
void loadDispayGride()
{
    // load gride
    string record;
    fstream load;
    load.open("Gride.txt", ios::in);
    for (int x = 0; x < xAxix; x++)
    {
        getline(load, record);
        for (int y = 0; y < yAxix; y++)
        {
            gride[x][y] = record[y];
        }
    }
    load.close();
    // display girde
    system("cls");
    for (int x = 0; x < xAxix; x++)
    {
        for (int y = 0; y < yAxix; y++)
        {
            cout << gride[x][y];
        }
        cout << endl;
    }
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void takeInput()
{
    string stuName, stuSubject;
    float stuMarks;
    gotoxy(17, 21);
    cin >> stuName;
    gotoxy(17, 22);
    cin >> stuSubject;
    gotoxy(17, 23);
    cin >> stuMarks;
    storeRecord(stuName, stuSubject, stuMarks);
}
void storeRecord(string name, string subject, float marks)
{
    studentType *recordStudent = new studentType;
    marksType *recordMarks = new marksType;
    recordStudent->name = name;
    recordStudent->stu_next = NULL;
    recordMarks->subject = subject;
    recordMarks->subjMarks = marks;
    recordMarks->mrk_next = NULL;
    if (stuHead == NULL && mrkHead == NULL)
    {
        stuHead = recordStudent;
        mrkHead = recordMarks;
    }
    else
    {
        studentType *obj1 = getLastRecordStu(stuHead);
        obj1->stu_next = recordStudent;
        marksType *obj2 = getLastRecordMark(mrkHead);
        obj2->mrk_next = recordMarks;
    }
}
studentType *getLastRecordStu(studentType *temp)
{
    while (temp->stu_next != NULL)
    {
        temp = temp->stu_next;
    }
    return temp;
}
marksType *getLastRecordMark(marksType *temp)
{
    while (temp->mrk_next != NULL)
    {
        temp = temp->mrk_next;
    }
    return temp;
}
void printSingleRecordStu(studentType *onerecord)
{
    gotoxy(1, 1);
    cout << onerecord->name;
}
void printSingleRecordMark(marksType *onerecord)
{
    gotoxy(24, 1);
    cout << onerecord->subject;
    gotoxy(24, 2);
    cout << onerecord->subjMarks;
}
void displayAllRecords()
{
    studentType *obj1 = stuHead;
    while (obj1 != NULL)
    {
        printSingleRecordStu(obj1);
        obj1 = obj1->stu_next;
    }
    marksType *obj2 = mrkHead;
    while (obj2 != NULL)
    {
        printSingleRecordMark(obj2);
        obj2 = obj2->mrk_next;
    }
}
