#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<< "Enter First number : ";
    cin>>n1;
    cout << "Enter Second number : ";
    cin>>n2;
    cout <<"Enter Third number : ";
    cin>> n3;
    if(n1>n2)
    {
        if(n1>n3)
        {
            cout<<"First number is greater...";
        }
        else
        {
            cout<< "Third number is greater...";
        }
    }
    else
    {
        if(n2>n3)
        {
            cout<< "Second number is greater...";
        }
        else
        {
            cout<<"Third number is greater...";
        }
    }
    cout << endl<<"Program End.";
}