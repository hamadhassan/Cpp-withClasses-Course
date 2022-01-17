#include <iostream>
using namespace std;
int main()
{
    /*During each summer, Ahmad and Fatima grow vegetables in their backyard and buy seeds and fertilizer
    from a local nursery. The nursery carries different types of vegetable fertilizers in various bag sizes. When
    buying a particular fertilizer, they want to know the price of the fertilizer per pound and the cost of
    fertilizing per square foot. Write the Algorithm that prompts the user to enter
    1. the size of the fertilizer bag in pounds.
    2. the cost of the bag.
    3. and the area in square feet that can be covered by the bag.*/
    int pound, cost, area = 0;
    cout << "Enter size of the fertilizer bag in pounds:";
    cin >> pound;
    cout << "Enter the cost of the bag:";
    cin >> cost;
    cout << "Enter the area in square feet that can be covered by the bag:";
    cin >> area;
    cost = cost / pound;
    area = area / cost;
    cout << "The cost of the fertilizer per pound is:" << cost << "RS" << endl;
    cout << "The cost of fertilizing the area per square foot is:" << area << "RS";
}