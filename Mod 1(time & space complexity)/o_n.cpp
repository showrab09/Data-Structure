#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++) // O(n)
    {
        cin >> num[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += num[i];
    }
    cout << sum;
    return 0;
}