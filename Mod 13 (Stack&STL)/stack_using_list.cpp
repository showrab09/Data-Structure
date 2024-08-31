#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> v;
    void push(int value)
    {
        v.push_back(value);
        cout << "value pushed." << endl;
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

int main()
{
    myStack st;
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
            cout << "Stack : ";
            while (st.empty() == false)
            {
                cout << st.top() << " ";
                st.pop();
            }
            cout << endl
                 << endl;
        }
        else if (op == 6)
        {
            break;
        }
    }
    return 0;
}