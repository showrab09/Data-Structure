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
};
void compare(Node *head, Node *head2, int c, int c2)
{
    if (c != c2)
    {
        cout << "NO";
        return;
    }
    else
    {
        while (head != NULL)
        {
            if (head->value != head2->value)
            {
                cout << "NO" << endl;
                return;
            }
            head = head->next;
            head2 = head2->next;
        }
        cout << "YES";
    }
}

int main()
{
    // first linked list
    Node *head = NULL;
    Node *tail = NULL;
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
    // counting the size of 1st linked list
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {

        count++;
        tmp = tmp->next;
    }
    // second linked list
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val2;

    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val2);
    }
    // counting the size of 2nd linked list
    int count2 = 0;
    Node *tmp2 = head2;
    while (tmp2 != NULL)
    {
        count2++;
        tmp2 = tmp2->next;
    }

    compare(head, head2, count, count2);

    return 0;
}