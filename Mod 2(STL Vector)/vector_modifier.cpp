#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v = {1, 2, 3};
    // vector<int> v2 = {10, 20, 30};
    // v = v2; // assign one vector to another
    // for (int a : v)
    // {
    //     cout << a << " ";
    // }

    // v.push_back(50);
    // for (int a : v)
    // {
    //     cout << a << " ";
    // }
    // v.pop_back();
    // for (int a : v)
    // {
    //     cout << a << " ";
    // }

    // vector<int> v = {1, 2, 3, 4, 5, 6};
    // // v.insert(v.begin() + 2, 1000); // v.begin is first pointer of the vector
    // vector<int> v2 = {100, 200, 300};
    // v.insert(v.begin() + 6, v2.begin(), v2.end()); // inserting a vector in another vector
    // for (int a : v)
    // {
    //     cout << a << " ";
    // }

    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    // v.erase(v.begin() + 3); //erase a specific ele
    v.erase(v.begin() + 2, v.begin() + 5); // erase specific portion
    for (int a : v)
    {
        cout << a << " ";
    }
    return 0;
}