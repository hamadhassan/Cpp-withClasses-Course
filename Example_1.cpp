#include <iostream>
using namespace std;
/*Write a function show that display counting from 1 to 10 */
// Function Prototype
void number();
int main()
{
    // function call
    cout << "Number between from 1 to 10" << endl;
    number();
}
// Function Definition
void number()
{
    int num;
    for (int i = 1; i <= 10; i++)
    {

        num = i;
        cout << num << endl;
        // return num;
    }
}
