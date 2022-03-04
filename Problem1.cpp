#include <iostream>
#include <fstream>
using namespace std;
string parseRecord(string record, int field);
void inputData();
void displayOutput(int index);
string names[100], passwords[100];
int ages[100];
float cgpa[100];
int idx = 0;
main()
{
    inputData();
    string n, p;
    cout << "Enter Name: ";
    cin >> n;
    cout << "Enter Password: ";
    cin >> p;
    for (int x = 0; x < idx; x++)
    {
        if (n == names[x] && p == passwords[x])
        {
            displayOutput(x);
        }
    }
}
string parseRecord(string record, int field)
{
    int commaCount = 1;
    string item;
    for (int x = 0; x < record.length(); x++)
    {
        if (record[x] == ',')
        {
            commaCount = commaCount + 1;
        }
        else if (commaCount == field)
        {
            item = item + record[x];
        }
    }
    return item;
}
void inputData()
{
    string word;
    fstream f_variable;
    f_variable.open("Data.txt", ios::in);
    while (!(f_variable.eof()))
    {
        getline(f_variable, word);
        names[idx] = parseRecord(word, 1);
        passwords[idx] = parseRecord(word, 2);
        ages[idx] = stoi(parseRecord(word, 3));
        cgpa[idx] = stof(parseRecord(word, 4));
        idx = idx + 1;
    }
}
void displayOutput(int index)
{
    cout << "Name \t Age \t CGPA" << endl;

    cout << names[index] << " \t " << ages[index];
    cout << " \t " << cgpa[index] << endl;
}