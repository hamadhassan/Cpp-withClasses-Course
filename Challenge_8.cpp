#include <iostream>
using namespace std;
int main()
{
    string p1,p2;
    cout << "Welcome to the game of Rock, Paper, Scissors..."<<endl;
    cout<< "Choose the two player from three players..."<<endl;
    cout <<"-----------------------------------------------"<<endl;
    cout << "Enter First player : ";
    cin>> p1;
    cout << "Enter Second player :";
    cin>>p2;

    if( (p1=="Rock"&& p2=="Scissors") || (p1=="Scissors" && p2=="Paper") || (p1=="Paper"&& p2=="Rock"))
    {
        cout<< "First Player is winner...";
    }
    else if((p2=="Rock"&& p1=="Scissors")|| (p2=="Scissors" && p1=="Paper")|| (p2=="Paper"&& p1=="Rock"))
    {
        cout<< "Second Player is winner...";
    }
    else if((p1=="Rock" && p2=="Rock")|| (p1=="Scissors" && p2=="Scissors")|| (p1=="Paper"&& p2=="Paper"))
    {
        cout<< "Withdraw...";
    }
    

    

}