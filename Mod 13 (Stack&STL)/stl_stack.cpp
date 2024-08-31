#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> q;
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
            q.push(val);
        }
        else if (op == 2)
        {
            q.pop();
            cout << "value popped." << endl;
        }
        else if (op == 3)
        {
            cout << "TOP is -" << q.top() << endl;
        }
        else if (op == 4)
        {
            cout << "size is : " << q.size() << endl;
        }
        else if (op == 5)
        {
            cout << "QUEUE : ";
            while (q.empty() == false)
            {
                cout << q.top() << " ";
                q.pop();
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