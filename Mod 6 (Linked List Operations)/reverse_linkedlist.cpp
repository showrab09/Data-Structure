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
void recursive_print(Node *head)
{
    if (head == NULL)
        return;
    recursive_print(head->next); // we cannot reverse singly linkedlist but recursion can do reverese
    cout << head->value << " ";
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    head->next = a;
    a->next = b;
    b->next = c;
    recursive_print(head);

    return 0;
}