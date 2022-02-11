#include <iostream>
using namespace std;
// prototype
void printTable(int table);
int main()
{
    // int table;
    // cout << "Enter the table number : ";
    // cin >> table;
    printTable(24);
    cout << "---------------" << endl;
    printTable(50);
    cout << "---------------" << endl;
    printTable(29);
    cout << "---------------" << endl;
}
// function deceleration
void printTable(int table)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << table << " * " << i << " = " << table * i << endl;
    }
}