#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    sort(num, num + n);
    int l = 0, r = n - 1;
    bool counter = false;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (num[mid] == x)
        {
            counter = true;
        }
        if (num[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (counter)
        cout << "Found";
    else
        cout << "Not found";
    return 0;
}