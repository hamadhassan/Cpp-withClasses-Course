#include <iostream>
using namespace std;
void amplify();
int main()
{
    amplify();
}
void amplify()
{

    int num, multiply, sequence;
    multiply = 1;
    num = 25;
    for (int n = 1; n <= num; n++)
    {
        sequence = n;

        if (sequence % 4 == 0)
        {
            multiply = sequence * 10;
            cout << " " << multiply;
        }
    }
}