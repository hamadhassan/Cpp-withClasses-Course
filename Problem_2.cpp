#include <iostream>
#include <fstream>
#include <string>    //for getline function
#include <windows.h> //color the text
using namespace std;
// Function Prototype
void menuOption();
bool checkUser(string User_username, string User_password);
string seperateField(string record, int fieldNumber);
void CreateUser();
// Data Structure
const int length = 10;
string username[length];
string password[length];
int index = 0;
int main()
{
    string user;
    string pass;
    int option;
    while (true)
    {
        cout << "------------------------------------------------------" << endl;
        cout << "|                 Security Application               |" << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "Choose Option:" << endl;
        cout << " 1.LogIn" << endl;
        cout << " 2.SignUp" << endl;
        cout << " 3.Exit" << endl;
        cout << "Press the number...";
        cin >> option;
        if (option == 1)
        {
            HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
            
            cout << "Enter username : ";
            cin >> user;
            cout << "Enter password : ";
            cin >> pass;
            bool condition = checkUser(user, pass);
            if (condition == true)
            {
                SetConsoleTextAttribute(h,2);
                cout << "Access Granted" << endl;
              // system("Color 2");
            }
            else if (condition == false)
            {
                cout << "Access Denied" << endl;
                SetConsoleTextAttribute(h,4);
              //  system("Color 4");

            }
        }
        else if (option == 2)
        {
            CreateUser();
        }
        else if (option == 3)
        {
            break;
        }
    }
}
// Function Definition
void CreateUser()
{
    string createUserName;
    string createUserPassword;
    cout << "Enter username : ";
    cin >> createUserName;
    cout << "Enter password : ";
    cin >> createUserPassword;
    fstream append;
    append.open("Problem_2Data.txt", ios::app);
    append << createUserName << "," << createUserPassword << "\n";
    append.close();
} // end of function
bool checkUser(string User_username, string User_password)
{
    string record;
    fstream read;
    read.open("Problem_2Data.txt", ios::in);
    while (!read.eof())
    {
        getline(read, record);
        username[index] = seperateField(record, 1);
        password[index] = seperateField(record, 2);
        if (username[index] == User_username && password[index] == User_password)
        {
            index++;
            return true;
        }
        else
        {
        }
    }
    index++;
    return false;
} // end of function
string seperateField(string record, int fieldNumber)
{
    int count = 1;
    string value;
    for (int i = 0; i < record.length(); i++)
    {
        if (record[i] == ',')
        {
            count++;
        }
        else if (count == fieldNumber)
        {
            value = value + record[i];
        }
    }
    return value;
}