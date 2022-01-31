#include <iostream>
using namespace std;
int main()
{
    int n,n1,n2,n3;
    n=n1=n2=n3=0;
    cout<<"Enter 1st number : ";
    cin>> n1;
    cout<<"Enter 2nd number : ";
    cin>> n2;
    cout<<"Enter 3rd number : ";
    cin>> n3;
    if(n1==n2 && n2==n3)
    {
        n=3;
    }
    else if(n1==n2 || n2==n3)
    {
        n=2;
    }
     else if(n1==n2 || n1==n3)
    {
        n=2;
    }
    else if(n1!=n2 && n2!=n3)
    {
        n=0;
    }
    else if(n1!=n2 || n2!=n3)
    {
        n=0;
    }
   
    cout<<"------------------------"<<endl;
    cout<<n;

}