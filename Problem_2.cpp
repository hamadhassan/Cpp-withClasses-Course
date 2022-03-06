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
    string alp;
    fstream read;
    read.open("Problem_2Data.txt", ios::in);
    getline(read, alp);
    int count = 0;
    char loop = 'a';
    while (loop <= 'z')
    {
        fstream append;
        if (alp[count] == loop)
        {
        }
        else
        {
            append.open("Problem_2Data.txt", ios::app);
            append << loop;
        }
        loop++;
        count++;
        append.close();
    }
    read.close();
}
