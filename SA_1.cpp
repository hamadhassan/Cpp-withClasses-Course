#include <iostream>
using namespace std;
int main()
{
    int age1,age2,age3;
    string name1,name2,name3;
    cout << "Enter First brother name   : ";
    cin>> name1;
    cout << "Enter First brother age    : ";
    cin>>age1;
     cout << "Enter Second brother name : ";
    cin>> name2;
    cout << "Enter Second brother age   : ";
    cin>>age2;
     cout << "Enter Third brother name  : ";
    cin>> name3;
    cout << "Enter Third brother age    : ";
    cin>>age3;
    if(age1<age2)
    {
        if (age1<age3)
        {
            cout << "Younger brother is "<< name1;
        }
        else
        {
           cout << "Younger brother is "<< name3;
        }
    }
    else
    {
        if(age2<age3)
        {
            cout << "Younger brother is "<< name2;
        }
        else
        {
             cout << "Younger brother is "<< name3;

        }


    }
}