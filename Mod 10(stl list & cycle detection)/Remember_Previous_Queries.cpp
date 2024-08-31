#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;
    int q;
    cin >> q;

    while (q--)
    {
        int option, value;
        cin >> option >> value;

        if (option == 0)
        {
            myList.push_front(value);
        }
        else if (option == 1)
        {
            myList.push_back(value);
        }
        else if (option == 2)
        {
            if (value < 0 || value >= myList.size())
            {
                        }
            else
            {
                myList.erase(next(myList.begin(), value));
            }
        }

        cout << "L -> ";
        for (int val : myList)
        {
            cout << val << " ";
        }
        cout << endl;
        myList.reverse();
        cout << "R -> ";
        for (int val : myList)
        {
            cout << val << " ";
        }
        cout << endl;
        myList.reverse();
    }
    return 0;
}
