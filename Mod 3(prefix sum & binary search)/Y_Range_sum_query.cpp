#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    int start, end;
    while (t--) // O(t)
    {
        cin >> start >> end;
        start--; // convert into position to index, thats y increment just 1
        end--;
        int sum = 0;
        for (int i = start; i <= end; i++) // O(end ba n) //total time complexity O(t x n)
        {
            sum += num[i];
        }
        cout << sum << endl;
    }
    return 0;
}