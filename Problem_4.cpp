#include <iostream>
#include <fstream>
using namespace std;
void readData();

int main()
{
    readData();
}
void readData()
{
    string record;
    fstream read;
    read.open("Problem_4Data.txt", ios::in);
    while (!(read.eof()))
    {
        getline(read, record);
        cout << record;
    }
}
