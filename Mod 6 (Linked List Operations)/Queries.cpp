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
void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    if (tail == NULL)
    {
        tail = head;
    }
}

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

void delete_at_pos(Node *&head, Node *&tail, int pos)
{
    if (head == NULL)
        return;
    if (pos == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }
    else
    {
        Node *tmp = head;
        for (int i = 1; i <= pos - 1; i++)
        {
            tmp = tmp->next;
            if (tmp == NULL)
            {
                return;
            }
        }
        if (tmp->next == NULL)
        {
            return;
        }
        Node *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        if (tmp->next == NULL) // if last node deleted then update the tail
        {
            tail = tmp;
        }
        delete deleteNode;
    }
};

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
    int t;
    cin >> t;

    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < t; i++)
    {
        int op, val;
        cin >> op >> val;
        if (op == 0)
        {
            insert_at_head(head, tail, val);
        }
        else if (op == 1)
        {
            insert_at_tail(head, tail, val);
        }
        else if (op == 2)
        {
            delete_at_pos(head, tail, val);
        }
        print(head);
    }

    return 0;
}
