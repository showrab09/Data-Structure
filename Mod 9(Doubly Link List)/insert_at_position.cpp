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
};
void insert_at_pos(Node *head, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= 2 - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;     // (new node er next) connect with (next node prev) 30->40
    tmp->next = newNode;           // (prev node of newnode er next) connect with newnode 20->30
                                   // reverse part
    newNode->next->prev = newNode; //(new node er porer node er prev connect with newnode) 40->30
    newNode->prev = tmp;           // new node er prev connect with (newnode er ager node) 30->20
};

int main()
{
    Node *head = new Node(10);
    Node *b = new Node(20);
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
    insert_at_pos(head, 30);
    print(head);
    reverse_print(tail);

    return 0;
}