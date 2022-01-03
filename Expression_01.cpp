#include <iostream>
using namespace std;
int main()
{
    // Convert MBs into Bytes
    int bits;
    cout << "Enter the Megabytes:";
    cin >> bits;
    // First convert MB into KB,then KB into bytes
    bits = bits * (1024 * 1024 * 8);
    cout << "Bits are:" << bits;
}