#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v; //1st type
    // vector<int> v(5);  //2nd type
    // for (int i = 0; i < v.size(); i++) // accessing value
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // vector<int> v(10, 10);              // 3rd type
    // vector<int> v2(v);                  // 4rth type

    int a[4] = {12, 13, 14, 15};
    vector<int> v(a, a + 4);           // type 5
    for (int i = 0; i < v.size(); i++) // accessing value
    {
        cout << v[i] << " ";
    }

    return 0;
}