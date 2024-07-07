#include <bits/stdc++.h>
using namespace std;
int main()
{
    // assign another list
    list<int> myList = {10, 20, 30, 40, 50, 60, 50};
    list<int> newList = {100, 200, 300};

    // list<int> newList = myList;
    // add at tail
    // newList.push_back(50);
    // //add at head
    // newList.push_front(1);
    // //delete from head
    // newList.pop_front();
    // //delete from tail
    // newList.pop_back();

    // myList.insert(next(myList.begin(), 2), 100); // insert at pos 2 ===== O(n)
    // myList.erase(next(myList.begin(), 2)); // erase pos 2 ===== O(n)
    // myList.insert(next(myList.begin(), 2), {100, 200, 300, 400}); //insert multiple values
    // myList.insert(next(myList.begin(), 0), newList.begin(), newList.end()); // insert another list

    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5)); //erase index 2 to 5
    // replace(myList.begin(), myList.end(), 50, 2000); // replace 50 with 2000

    // for (int val : myList)
    // {
    //     cout << val << endl;
    // }

    auto it = find(myList.begin(), myList.end(), 500); // finding 500 in the list
    if (it == myList.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "found";
    }

    return 0;
}