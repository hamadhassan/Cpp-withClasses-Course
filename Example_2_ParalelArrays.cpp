#include <iostream>
using namespace std;
const int length = 5;
string name[length] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
int quantity[length];
void storeSales();
int totalSales();
void specificSales();
int getlargest();
void mostSelled();
int getsmallest();
void leastselled();
int main()
{
    int option = -1;
    while (option != 6)
    {
        cout << "Press 1 to add sale by quantity " << endl;
        cout << "Press 2 to view sale by quantity " << endl;
        cout << "Press 3 to view total sale" << endl;
        cout << "Press 4 view most selled product" << endl;
        cout << "Press 5 view least selled product" << endl;
        cout << "Press 0 to Exit ...";
        cin >> option;
        if (option == 0)
        {
            break;
        }
        else if (option == 1)
        {
            storeSales();
        }
        else if (option == 2)
        {
            specificSales();
        }
        else if (option == 3)
        {
            cout << "Total salled number is " << totalSales();
        }
        else if (option == 4)
        {
            mostSelled();
            cout << "Most Salled item wise..." << endl;
            for (int i = 0; i < length; i++)
            {

                cout << name[i] << "\t\t" << quantity[i] << endl;
            }
        }
        else if (option == 5)
        {
            leastselled();
            cout << "Least Salled item wise..." << endl;
            for (int i = 0; i < length; i++)
            {

                cout << name[i] << "\t\t" << quantity[i] << endl;
            }
        }
        else
        {
            break;
        }
    }
}
void storeSales()
{
    int number = -1;
    for (int i = 0; i < length; i++)
    {
        cout << "Enter sold number of " << name[i] << " pasta : ";
        cin >> quantity[i];
    }
}
int totalSales()
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += quantity[i];
    }
    return sum;
}
void specificSales()
{
    cout << "Sr.# \t Pasta \t Quantity" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << i + 1 << "\t" << name[i] << "\t\t" << quantity[i] << endl;
    }
}
int getlargest()
{
    int index, max;
    max = quantity[0];
    for (int i = 1; i < length; i++)
    {
        if (quantity[i] < max)
        {
            max = quantity[i];
            index = i;
        }
    }
    return index;
}
void mostSelled()
{
    int index, temp = 0;
    for (int i = 0; i < length; i++)
    {
        index = getlargest();
        temp = quantity[index];
        quantity[index] = quantity[i];
        quantity[i] = temp;
    }
}
int getsmallest()
{
    int index, max;
    max = quantity[0];
    for (int i = 1; i < length; i++)
    {
        if (quantity[i] > max)
        {
            max = quantity[i];
            index = i;
        }
    }
    return index;
}
void leastselled()
{
    int index, temp = 0;
    for (int i = 0; i < length; i++)
    {
        index = getlargest();
        temp = quantity[index];
        quantity[index] = quantity[i];
        quantity[i] = temp;
    }
}