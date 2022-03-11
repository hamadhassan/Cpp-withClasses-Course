#include <iostream>
using namespace std;
int matrix[3][3] = {{1, 1}, {1, 1}, {1, 1}};
bool isProbMatrix();
int main()
{
    cout << isProbMatrix();
}
bool isProbMatrix()
{
    int sum[3] = {0, 0, 0};
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            sum[x] += matrix[x][y]; // store each row answers
        }
        cout << sum[x] << endl;
    }
    int result = sum[0];//assign first value of sum to resukt to check all the result
    for (int i = 1; i < 3; i++)//check all the store sum is same or not 
    {
        if (result == sum[i])
        {
            return true;
        }
    }
    return false;
}