#include <iostream>
using namespace std;
int main()
{
    int beta[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            beta[i][j] = i * j;
            cout << beta[i][j];
        }
        cout<<endl;
    }
}