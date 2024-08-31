#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;
    void push(int value)
    {
        v.push_back(value);
    };
    void pop()
    {
        v.pop_back();
    };
    int top()
    {
        return v.back();
    };
    int size()
    {
        return v.size();
    };
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};
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
    myStack st;
    myQueue q;
    int n, m, val;

    cin >> n >> m;
    while (n--)
    {
        cin >> val;
        st.push(val);
    }
    while (m--)
    {
        cin >> val;
        q.push(val);
    }

    if (st.size() != q.size())
    {
        cout << "NO";
        return 0;
    }
    else
    {
        while (!st.empty())
        {
            if (st.top() != q.top())
            {
                cout << "NO";
                return 0;
            }
            st.pop();
            q.pop();
        }
        cout << "YES";
    }

    return 0;
}