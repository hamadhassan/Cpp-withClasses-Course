#include <iostream>
using namespace std;
int number[5];
int largestIndex();
void sorting();
void store();
void display();
int main()
{
    store();
    largestIndex();
    sorting();
    display();
}
void display()
{
    for (int i = 0; i < 5; i++)
    {
        cout << number[i] << ",";
    }
}
void store()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number : ";
        cin >> number[i];
    }
}
int largestIndex()
{
    int max = -1, index;
    for (int i = 0; i < 5; i++)
    {
        if (number[i] < max)
        {
            max = number[i];
            index = i;
        }
    }
    return index;
}
void sorting()
{
    int index, temp;
    for (int i = 0; i < 5; i++)
    {
        index = largestIndex();
        temp = number[index];
        number[index] = number[i];
        number[i] = temp;
    }
}