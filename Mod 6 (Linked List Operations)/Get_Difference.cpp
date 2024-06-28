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

void find_difference(Node *head)
{
    int max = head->value;
    int min = head->value;
    while (head != NULL)
    {
        if (max < head->value)
        {
            max = head->value;
        }
        else if (min > head->value)
        {
            min = head->value;
        }
        head = head->next;
    }
    cout << max - min << endl;
};

int main()
{
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

    find_difference(head);

    return 0;
}