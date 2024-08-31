#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, val;
    stack<int> st;
    queue<int> q;
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
            if (st.top() != q.front())
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