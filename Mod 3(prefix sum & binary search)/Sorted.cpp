#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int num[n];
        // taking input for array
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        bool counter = false;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (num[i] > num[j])
                {
                    counter = true;
                }
            }
        }
        if (counter)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}
