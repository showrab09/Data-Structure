#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    queue<string> q;
    int t;
    cin >> t;
    string name;
    while (t--)
    {
        int op;
        cin >> op;
        if (op == 0)
        {
            cin >> name;
            q.push(name);
        }
        else if (op == 1)
        {
            if (q.empty())
            {
                cout << "Invalid" << endl;
                continue;
            }
            string done = q.front();
            q.pop();
            cout << done << endl;
        }
    }

    return 0;
}