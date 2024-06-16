#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v = {1, 2, 3, 4, 5, 2, 2, 3, 2};
    // replace(v.begin(), v.end(), 2, 200); // replace all 2 with 200
    // for (int a : v)
    // {
    //     cout << a << " ";
    // }

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto it = find(v.begin(), v.end(), 200);
    if (it == v.end())
    {
        cout << "Not Found";
    }

    else
    {
        cout << "Found";
    }
    return 0;
}