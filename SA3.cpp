#include <iostream>
using namespace std;
int main()
{
    double dec1 = 2.5;
    double dec2 = 3.8;
    double *p, *q;
    p = &dec1;
    *p = dec2 - dec1;
    q = p;
    *q = 10.0;
    *p = 2 * dec1 + (*q);
    q = &dec2;
    dec1 = *p + *q;
    cout << dec1 << " " << dec2 << endl;
    cout << *p << " " << *q << endl;
}