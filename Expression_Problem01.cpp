#include <iostream>
using namespace std;
int main()
{
    /*During each summer, Ahmad and Fatima grow vegetables in their backyard and buy seeds and fertilizer from a local nursery. The nursery carries different types of vegetable fertilizers in various bag sizes. When buying a particular fertilizer, they want to know the price of the fertilizer per pound and the cost of fertilizing per square foot. Write the Algorithm that prompts the user to enter
    1. The size of the fertilizer bag in pounds.
    2. The cost of the bag.
    3. And the area in square feet that can be covered by the bag.
    The Algorithm should then output
    1. The cost of the fertilizer per pound
    2. The cost of fertilizing the area per square foot.
    Write Algorithm and then also draw the memory representations for this challenge*/
    
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