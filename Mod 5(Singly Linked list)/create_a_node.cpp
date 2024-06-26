#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
};

int main()
{
    Node a, b;
    a.value = 100;
    b.value = 200;

    a.next = &b;
    cout << a.value << endl
         << b.value << endl;
    cout << a.next->value;

    return 0;
}