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
void insert(Node *&head, Node *&tail, int index, int val, int size)
{

    // new Node
    Node *newNode = new Node(val);

    if (index == 0)
    {
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    else if (index == size)
    {
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    else
    {

        Node *tmp2 = head;
        for (int i = 1; i <= index - 1; i++)
        {
            tmp2 = tmp2->next;
        }
        newNode->next = tmp2->next;
        tmp2->next = newNode;
        newNode->next->prev = newNode;
        newNode->prev = tmp2;
    }
};
void print(Node *head)
{
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";

        tmp = tmp->next;
    }
    cout << endl;
}
void reverse_print(Node *tail)
{
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";

        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;

    while (q--)
    {
        int index, value;
        cin >> index >> value;

        // getting the size
        Node *tmp = head;
        int size = 0;
        while (tmp != NULL)
        {
            size++;
            tmp = tmp->next;
        }
        if (index > size)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert(head, tail, index, value, size);
            print(head);
            reverse_print(tail);
        }
    }
    return 0;
}