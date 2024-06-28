#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
int main()
{
    Node *head = new Node(5);
    Node *a = new Node(100);
    Node *b = new Node(300);
    Node *c = new Node(400);
    Node *d = new Node(900);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->next == NULL)
        {
            cout << temp->value << endl;
            break;
        }
        else
        {
            temp = temp->next;
        }
    }

    return 0;
}