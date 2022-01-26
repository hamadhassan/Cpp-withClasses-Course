#include<iostream>
using namespace std;
int main()
{
string option;
float area,side,width,radius,base,hight;
cout << "Calculate the Area of geometry figure...";
cin>>option;
if(option=="square")
{
cout << "Enter the side of squre : ";
cin>> side;
area=side*side;
}
else if( option=="rectangule")
{
cout << "Enter the length of rectangule : ";
cin>> side;
cout << "Enter the width of rectangule  : ";
cin>> width;
area=width*side;
}
else if( option=="circle")
{
cout << "Enter the radius of circle : ";
cin>> radius;
area=radius*radius*2.14;
}
else if(option=="triangle")
{
cout<<"Enter the base of triangle : ";
cin>>base;
cout<<"Enter the hight of triangle :";
cin>>hight;
area=0.5*(base*hight);
}
cout<< "Area is :"<<area;
}
