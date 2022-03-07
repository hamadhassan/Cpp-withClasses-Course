#include <iostream>
#include <fstream>
using namespace std;
int secretCode(string code);
void readData();
string sepreatedData(string record, int field);
void DisplayData();
int main()
{
    string code;
    cout << "Enter words : ";
    cin >> code;
    cout << secretCode(code);
    //  readData();
    // DisplayData();
}
int secretCode(string code)
{
    int letter;
    for (int i = 0; i < code.length(); i++)
    {
        letter = code[i];
        return letter;
    }
}
void readData()
{
    string record;
    char letter;
    fstream read;
    read.open("Problem_3Data.txt", ios::in);
    while (!(read.eof()))
    {
        getline(read, record, ',');
        letter = stoi(record);
    }
    cout << letter;
    read.close();
}