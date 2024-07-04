#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList(5, 100);
    // cout << myList.front();
    // cout << myList.back();
    // printing all value with iterator
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }
    // shortcut
    for (int val : myList)
    {
        cout << val << " ";
    }
    return 0;
}