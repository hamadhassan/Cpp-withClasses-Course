#include <iostream>
using namespace std;
const int length = 5;
int number[length] = {5, 4, 1, 11, 6};
int sortnumber[length];
int greatest();
void sorting();
int main()
{
    greatest();
    sorting();
    for (int i = 0; i < length; i++)
    {
        cout << sortnumber[i] << ",";
    }
}
int greatest()
{
    int max, index;
    max = number[0];
    for (int i = 1; i < length; i++)
    {
        if (number[i] > max)
        {
            max = number[i];
            index = i;
        }
    }
    number[index] = -1;
    return max;
}
void sorting()
{
    for (int i = 0; i < length; i++)
    {
        sortnumber[i] = greatest();
    }
}