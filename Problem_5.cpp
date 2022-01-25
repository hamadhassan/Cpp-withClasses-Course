#include<iostream>
using namespace std;
int main()
{
int holidays,wrkdays,playtime,timeleft,hur,mint;
cout << "Enter the Holidays : ";
cin>> holidays;
wrkdays=365-holidays;
playtime=(wrkdays*63+holidays*127);
timeleft=(30000-playtime);
hur=timeleft/60;
mint=timeleft%60;
if(playtime<=30000)
{
cout <<"Tom Sleep Well."<<endl;
cout<<hur<<" Hours and "<< mint<< " minutes less for play.";
}
else 
{
cout <<"Tom will run away."<<endl;
hur=(hur*(-1));
mint=(mint*(-1));
cout<<hur<<" Hours and "<< mint<< " minutes for play.";
}



}