#include <iostream>
using namespace std;
int main()
{
string pass;
cout << "Enter the password : ";
cin>> pass;
if(pass=="123")
{
cout <<"Login Successfully.";
}
else 
{
cout << "Incorrect password";
}
}