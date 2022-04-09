#include <iostream>
#include <Windows.h>
using namespace std;
void gotoxy(int x, int y);
int main()
{
    system("cls");
    for(int x=0;x<=100;x++)
    {
        Sleep(200);
        gotoxy(x,0);
        cout<<".";
        gotoxy(x-10,0);
        cout<<" ";
    }
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}