#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

int main()
{
    Node a(10);
    Node b(200);

    a.next = &b;
    cout << a.value << endl
         << b.value << endl;
    cout << a.next->value;

    return 0;
}