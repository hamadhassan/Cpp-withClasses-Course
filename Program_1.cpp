#include<iostream>
using namespace std;
int main()
{
float Matric,Inter,ECAT;
cout<< "Enter your obtained Matric marks:";
cin>> Matric;
cout<< "Enter your obtained First-year marks:";
cin>> Inter;
cout<< "Enter your obtained ECAT marks:";
cin>> ECAT;
Matric=Matric/1100*100*0.25;
Inter=Inter/550*100*0.45;
ECAT=ECAT/400*100*0.30;
Matric=Matric+Inter+ECAT;
cout<< "Your Aggregate is:" <<Matric << "%";
}