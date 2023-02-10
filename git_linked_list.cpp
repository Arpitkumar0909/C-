#include <iostream>
using namespace std;
class node
{
public:
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
void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << "-(" << temp->data << ")-";
        temp = temp->next;
    }
}
int main()
{
    node *node1 = new node(1);
    node *head = node1;
    node *tail = node1;

    return 0;
}