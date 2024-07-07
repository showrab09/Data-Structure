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
    cout << endl;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";

        tmp = tmp->next;
    }
    cout << endl;
    cout << endl;
}

// ulta print
void reverse_print(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j) // first condition for odd num, 2nd for even num of index
    {
        swap(i->value, j->value);
        i = i->next;
        j = j->prev;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    // connection

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = c;
    c->prev = b;

    c->next = d;
    d->prev = c;
    Node *tail = d; // tracking the trail
    print(head);

    reverse_print(head, tail);

    print(head);
    return 0;
}