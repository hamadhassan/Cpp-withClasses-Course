#include <iostream>
using namespace std;
int main()
{
    string str1 = "sunny";
    string str2 = "cloudy";
    string *s1;
    cout << str1 << " " << str2 << endl;
    s1 = &str1;
    str1 = str2;
    str2 = *s1;
    cout << str1 << " " << str2 << endl;
}