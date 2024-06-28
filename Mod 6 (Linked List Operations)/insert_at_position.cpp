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
void insert_at_tail(Node *&head, int val) // inserting function at tail
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    } // tmp ekhon last node a
    tmp->next = newNode;
};
void insert_at_position(Node *head, int pos, int value)
{
    Node *newNode = new Node(value);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;

    return;
};

void print(Node *head) // printing function
{
    Node *tmp = head;
    cout << "Your linked list: ";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail: " << endl;
        cout << "Option 2: Show Linked List: " << endl;
        cout << "Option 3: Insert at position: " << endl;
        cout << "Option 3: Terminate: " << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter value: ";
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (op == 2)
        {
            print(head);
        }
        else if (op == 3)
        {
            cout << "Enter Position: ";
            int pos;
            cin >> pos;
            int value;
            cin >> value;
            insert_at_position(head, pos, value);
        }
        else if (op == 4)
        {
            break;
        }
    }
    return 0;
}