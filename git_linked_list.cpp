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

int main()
{
    node *node1 = new node(1);
    node *head = node1;
    node *tail = node1;
    return 0;
}