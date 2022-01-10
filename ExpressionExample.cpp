#include<iostream>
using namespace std;
int main()
{
int Charge,Time;
cout <<"Enter Charge in Coulomb:";
cin>> Charge;
cout << "Enter Time in Second:";
cin>> Time;
Charge=Charge/Time;
cout<< "Current is:"<< Charge<<"  Coulomb/Sec";
}