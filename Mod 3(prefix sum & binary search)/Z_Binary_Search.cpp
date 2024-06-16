#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    int num[n];
    for (int i = 0; i < n; i++) // O(n)
    {
        cin >> num[i];
    }
    sort(num, num + n); // O()
    while (t--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        bool counter = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (num[mid] == x)
            {
                counter = true;
                break;
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
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}
