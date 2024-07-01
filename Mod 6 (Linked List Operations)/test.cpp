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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == 0)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == 0)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
};

void delete_node(Node *&head, int position)
{
    // getting the size of list
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    };

    if (head == NULL)
    {
        cout << "Nothing to delete" << endl;
        return;
    };
    if (position == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }
    else if (position >= count)
    {
        cout << "Invalid index" << endl;
        return;
    }
    else
    {
        Node *tmp = head;
        for (int i = 1; i <= position - 1; i++)
        {
            tmp = tmp->next;
        }
        Node *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
    }
};
void print(Node *head)
{
    cout << "LIST: ";
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl
         << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cout << "0 - Insert at Head: " << endl;
        cout << "1 - Insert at Tail: " << endl;
        cout << "2 - Delete a Node: " << endl;
        cout << "3 - Display Linked List: " << endl;
        cout << "4 - Terminate: " << endl
             << endl;
        cout << "Enter your option and value: " << endl;
        int op, val;
        cin >> op;
        cout << endl
             << endl;
        if (op == 0)
        {
            cin >> val;
            insert_at_head(head, tail, val);
        }
        else if (op == 1)
        {
            cin >> val;
            insert_at_tail(head, tail, val);
        }
        else if (op == 2)
        {
            cin >> val;
            delete_node(head, val);
        }
        else if (op == 3)
        {
            print(head);
        }
        else if (op == 4)
        {
            break;
        }
        print(head);
    }

    return 0;
}