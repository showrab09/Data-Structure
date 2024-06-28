#include <bits/stdc++.h>
using namespace std;

void fun(int *&ptr)
{
    ptr = NULL;
}
int main()
{
    int a = 10;
    int *point = &a;
    fun(point);
    cout << point;
    return 0;
}