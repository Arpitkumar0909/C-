#include <iostream>
using namespace std;
class node
{
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void created_at_tail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}
int main()
{
    node *node1 = new node(1);
    node *head = node1;
    node *tail = node1;
    return 0;
}