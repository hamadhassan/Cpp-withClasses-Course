#include <iostream>
using namespace std;
struct noteType
{
    int info = 123;
    noteType *link;
};
noteType *q,*p,*current,*info;
int main()
{
    q = p->link;
    cout << q->info << " Ali" << current->info;
    cout << current->link->info;
}