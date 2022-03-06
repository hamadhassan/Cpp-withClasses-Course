#include <iostream>
#include <fstream>
using namespace std;
void getBirthdayCake(string name, int age);     // write data
void readData();                                // read data
string sepreatedData(string record, int field); // read the comma sperated file and return the field block
void DisplayData();                             // display data according to the formate
string names;
int ages;
int main()
{
    string name;
    int age;
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter age : ";
    cin >> age;
    getBirthdayCake(name, age);
    readData();
    DisplayData();
}
void getBirthdayCake(string name, int age)
{
    fstream write;
    write.open("Problem_1Data.txt", ios::out);
    write << name << "," << age;
    write.close();
} // end of data write
void readData()
{
    string record;
    fstream read;
    read.open("Problem_1Data.txt", ios::in);
    while (!(read.eof()))
    {
        getline(read, record);
        names = sepreatedData(record, 1);
        ages = stoi(sepreatedData(record, 2));
    }
    read.close();
}
string sepreatedData(string record, int field)
{
    int count = 1;
    string value;
    for (int i = 0; i < record.length(); i++)
    {
        if (record[i] == ',')
        {
            count++;
        }
        else if (count == field)
        {
            value = value + record[i];
        }
    }
    return value;
}
void DisplayData()
{
    if (ages % 2 == 0)
    {
        cout << "###############" << endl;
        cout << "# " << ages << " HB " << names << "! " << ages << " #" << endl;
        cout << "###############" << endl;
    }
    else
    {
        cout << "***************" << endl;
        cout << "* " << ages << " HB " << names << "! " << ages << " *" << endl;
        cout << "***************" << endl;
    }
}