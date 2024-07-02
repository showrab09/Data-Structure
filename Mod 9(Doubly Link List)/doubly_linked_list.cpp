#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";

        tmp = tmp->next;
    }
    cout << endl;
}

// ulta print
void reverse_print(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";

        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    // connection

    head->next = b;
    b->prev = head;

    b->next = c;
    c->prev = b;

    c->next = d;
    d->prev = c;
    Node *tail = d; // tracking the trail
    print(head);
    reverse_print(tail);

    return 0;
}