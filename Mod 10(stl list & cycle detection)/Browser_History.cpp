#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string value;
    Node *next;
    Node *prev;

    Node(string value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert(Node *&head, Node *&tail, string val)
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
void search_command(Node *&head, Node *&current, string search)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->value == search)
        {
            cout << tmp->value << endl;
            current = tmp;
            return;
        }
        tmp = tmp->next;
    }
    cout << "Not Available" << endl;
};
void go_previous(Node *&current)
{
    if (current->prev == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        current = current->prev;
        cout << current->value << endl;
    }
}
void go_next(Node *&current)
{
    if (current->next == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        current = current->next;
        cout << current->value << endl;
    }
}
void print(Node *head)
{
    Node *tmp = head;
    cout << endl;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";

        tmp = tmp->next;
    }
    cout << endl;
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *current = NULL;

    while (true)
    {
        string val;
        cin >> val;
        if (val == "end")
        {
            break;
        }
        insert(head, tail, val);
    }
    // print(head);
    int q;
    cin >> q;
    while (q--)
    {
        string command;
        cin >> command;
        if (command == "visit")
        {
            string search;
            cin >> search;
            search_command(head, current, search);
        }
        else if (command == "prev")
        {
            go_previous(current);
        }
        else if (command == "next")
        {
            go_next(current);
        }
    }

    return 0;
}