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
    Node *a = new Node(50);
    Node *b = new Node(5000);
    Node *c = new Node(1);
    head->next = a;
    a->next = b;
    b->next = c;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << head->value << endl;
        head = head->next;
    }

    return 0;
}