#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, t;
    cin >> n >> t;
    long long num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    long long pre[n]; // creating new prefix sum array
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            pre[i] = num[i];
        }
        else
        {
            pre[i] = num[i] + pre[i - 1];
        }
    }

    long long start, end;
    while (t--) // O(t)
    {
        cin >> start >> end;
        start--; // convert into position to index, thats y increment just 1
        end--;
        long long sum;
        if (start == 0)
        {
            sum = pre[end];
        }
        else
        {
            sum = pre[end] - pre[start - 1];
        }

        cout << sum << endl;
    }
    return 0;
}