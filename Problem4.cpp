#include <iostream>
using namespace std;
int main()
{
    enum color_type
    {
        red,
        orange,
        yellow,
        green,
        blue,
        violet
    };
    color_type shirt, pants;
    shirt = red;
    pants = blue;
    cout << shirt << " " << pants << endl;
    return 0;
}