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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    void push(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    };
    void pop()
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    };
    int top()
    {
        return head->value;
    };
    int size()
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
    bool empty()
    {
        if (size() == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myQueue st;
    int op, val;

    while (true)
    {
        cout << "1 PUSH: " << endl;
        cout << "2 POP: " << endl;
        cout << "3 TOP: " << endl;
        cout << "4 SIZE: " << endl;
        cout << "5 PRINT: " << endl;
        cout << "6 EXIT: " << endl;
        cout << endl;
        cin >> op;
        if (op == 1)
        {
            cin >> val;
            st.push(val);
        }
        else if (op == 2)
        {
            st.pop();
            cout << "value popped." << endl;
        }
        else if (op == 3)
        {
            cout << "TOP is -" << st.top() << endl;
        }
        else if (op == 4)
        {
            cout << "size is : " << st.size() << endl;
        }
        else if (op == 5)
        {
            cout << "QUEUE : ";
            while (st.empty() == false)
            {
                cout << st.top() << " ";
                st.pop();
            }
            cout << endl;
        }
        else if (op == 6)
        {

            break;
        }
    }
    return 0;
}