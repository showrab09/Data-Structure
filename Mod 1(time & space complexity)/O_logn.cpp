// print the number in reverse way
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // int num;
    // while (n > 0) // O(logn)
    // {
    //     num = n % 10;
    //     cout << num << " ";
    //     n /= 10;
    // }

    for (int i = 1; i <= n; i = i * 2) // O(logn)
    {
        cout << i << " ";
    };
    return 0;
}