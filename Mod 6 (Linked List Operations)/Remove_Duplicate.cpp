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

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void remove_duplicates(Node *&head)
{
    if (head == NULL || head->next == NULL)
        return;

    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = i; j->next != NULL;)
        {
            if (j->next->value == i->value)
            {
                Node *deleteNode = j->next;
                j->next = j->next->next;
                delete deleteNode;
            }
            else
            {
                j = j->next;
            }
        }
    }
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL; // Tracking the tail for O(1) complexity
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    remove_duplicates(head);
    print(head);

    return 0;
}
