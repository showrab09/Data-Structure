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

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
};
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
};
void insert_at_pos(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;     // (new node er next) connect with (next node prev) 30->40
    tmp->next = newNode;           // (prev node of newnode er next) connect with newnode 20->30
                                   // reverse part
    newNode->next->prev = newNode; //(new node er porer node er prev connect with newnode) 40->30
    newNode->prev = tmp;           // new node er prev connect with (newnode er ager node) 30->20
};
void delete_at_pos(Node *&head, Node *&tail, int pos, int size)
{

    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }

    if (pos == size - 1)
    {
        Node *deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        tail->next = NULL;
    }
    else if (pos >= size)
    {
        cout << "Invalid Index" << endl;
        return;
    }
    else if (pos == 0)
    {

        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        head->prev = NULL;
    }
    else
    {
        Node *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        tmp->next->prev = tmp;
        delete deleteNode;
    }
};
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
};

void print(Node *head)
{
    Node *tmp = head;
    cout << endl
         << endl;
    cout << "LIST   :  ";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";

        tmp = tmp->next;
    }
    cout << endl;
}

// ulta print
void reverse_print(Node *tail)
{
    Node *tmp = tail;
    cout << "RE LIST: ";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";

        tmp = tmp->prev;
    }
    cout << endl
         << endl;
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {

        cout << "1 - Insert at Head" << endl;
        cout << "2 - Insert at tail" << endl;
        cout << "3 - Insert at position" << endl;
        cout << "4 - Delete a node" << endl;
        cout << "5 - Terminate" << endl;

        cout << "CHOOSE YOUR OPTION: ";
        int option;
        cin >> option;
        int val, pos;
        if (option == 1) // head insert
        {
            cout << "ENTER VALUE: ";
            cin >> val;
            insert_at_head(head, tail, val);
        }
        else if (option == 2) // tail insert
        {
            cout << "ENTER VALUE: ";
            cin >> val;
            insert_at_tail(head, tail, val);
        }
        else if (option == 3) // insert at position
        {
            cout << "ENTER POSITION: ";
            cin >> pos;
            cout << "ENTER VALUE: ";
            cin >> val;
            insert_at_pos(head, pos, val);
        }
        else if (option == 4)
        {
            cout << "ENTER POSITION: ";
            cin >> pos;

            delete_at_pos(head, tail, pos, size(head));
        }
        else if (option == 5)
        {
            break;
        }
        print(head);
        reverse_print(tail);
    }
    return 0;
}