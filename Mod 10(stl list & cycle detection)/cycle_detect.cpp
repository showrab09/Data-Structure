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
    Node *head = new Node(10);
    Node *a = new Node(10);
    Node *b = new Node(10);
    Node *c = new Node(10);
    Node *d = new Node(10);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a;
    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cout << "cycle detected";
            break;
        }
    }
    return 0;
}