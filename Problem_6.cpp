#include<iostream>
using namespace std;
int main()
{
float speed;
cout << "Enter Speed : ";
cin>> speed;
if(speed<=10)
{
cout <<"Slow";
}
else if(speed<=50)
{
cout <<"Avearge";
}
else if(speed<=150)
{
cout <<"Fast";
}
else if(speed<=1000)
{
cout <<"Ultra Fast";
}
else if(speed>1000)
{
cout <<"Extreme Fast";
}
cout <<endl<< "Thank for using.";
}