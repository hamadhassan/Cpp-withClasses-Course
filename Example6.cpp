#include <iostream>
using namespace std;
void print(int arr[], int size);
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    print(arr[2], 3);
    print(arr[1], 3);
    print(arr[0], 3);
}
void print(int arr[], int size)
{
    for (int x = 0; x < size; x++)
    {
        cout << arr[x];
    }
    cout<<endl;
}