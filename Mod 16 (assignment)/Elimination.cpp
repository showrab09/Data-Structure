#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for (char ch : s)
        {
            if (st.empty() == true)
            {
                st.push(ch);
            }
            else
            {
                if (ch == '1' && st.top() == '0')
                {
                    st.pop();
                }
                else if (ch == '1' && st.top() == '1')
                {
                    st.push(ch);
                }
                else if (ch == '0')
                {
                    st.push(ch);
                }
            }
        }
        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}