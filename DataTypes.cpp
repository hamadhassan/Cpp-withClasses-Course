#include <iostream>
using namespace std;
int main()
{
     cout << "Different Data type with respect to character output" << endl;
     int num1;
     num1 = 100;
     cout << "This is integer data type values:" << num1 << endl;
     cout << "***********" << endl;
     float num2;
     num2 = 100.012;
     cout << "This is float data type value:" << num2 << endl;
     cout << "***********" << endl;
     double num3;
     num3 = 12.12345;
     cout << "This is double data type:" << num3 << endl;
     cout << "***********" << endl;
     char ch1;
     ch1 = 'a';
     cout << "This is character data type:" << ch1 << endl;
     cout << "***********" << endl;
     string st1;
     st1 = "abc";
     cout << "This is String data type:" << st1 << endl;
     cout << "--------------------" << endl;
     cout << "Different Data type with respect to character input" << endl;
     int num4 = 0;
     cout << "Enter a integer data type value:";
     cin >> num4;
     cout << "User enter number is:" << num4 << endl;
     cout << "***********" << endl;
     float num5 = 0.0;
     cout << "Enter a Float data type value:";
     cin >> num5;
     cout << "User enter value is:" << num5 << endl;
     cout << "***********" << endl;
     char ch2 = 'a';
     cout << "Enter a character data type value:";
     cin >> ch2;
     cout << "User enter value is:" << ch2 << endl;
     cout << "***********" << endl;
     string st2 = "abc";
     cout << "Enter a string data type value:";
     cin >> st2;
     cout << "User enter value is:" << st2 << endl;
     cout << "***********" << endl;
}