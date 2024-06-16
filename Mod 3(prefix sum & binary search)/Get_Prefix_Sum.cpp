#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    long long pre[n];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            pre[i] = num[i];
        }
        else
        {
            pre[i] = pre[i - 1] + num[i];
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << pre[i] << " ";
    }

    return 0;
}