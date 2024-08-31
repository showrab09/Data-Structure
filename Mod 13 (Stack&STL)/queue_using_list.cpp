#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> qu;

    void push(int value)
    {
        qu.push_back(value);
    };
    void pop()
    {
        qu.pop_front();
    };
    int top()
    {
        return qu.front();
    };
    int size()
    {
        return qu.size();
    };
    bool empty()
    {
        return qu.empty();
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