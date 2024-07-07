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
void insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
};
void check_pallindrome(Node *&head, Node *&tail)
{
    Node *i = head;
    Node *j = tail;

    int counter = 1;
    while (i != j && i->prev != j)
    {

        if (i->value != j->value)
        {
            counter = 0;
            break;
        }
        i = i->next;
        j = j->prev;
    }

    if (counter == 1)
    {
        cout << "YES";
    }
    else if (counter == 0)
    {
        cout << "NO";
    }
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert(head, tail, val);
    }
    check_pallindrome(head, tail);

    return 0;
}