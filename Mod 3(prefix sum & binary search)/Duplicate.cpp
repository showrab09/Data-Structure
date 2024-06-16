#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    bool counter = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] == num[j])
            {
                counter = true;
                break;
            }
        }
    }
    if (counter)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}