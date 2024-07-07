#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 10, 1, 12, 40, 2, 3, 9, 4, 5, 6, 7, 8, 1, 10, 2};
    // myList.remove(3); //remove 3 from the list
    // myList.sort(); // sort the list in ascendin way
    // myList.sort(greater<int>()); //sort in descending way
    // myList.unique(); //delete the duplicates .need to sort first
    // myList.reverse(); // reverse the list
    cout << *next(myList.begin(), 3); // access ith value from the list
    // for (int val : myList)
    // {
    //     cout << val << " ";
    // }
    // return 0;
}