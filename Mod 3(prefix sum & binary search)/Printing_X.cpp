#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char box[n][n];
    int half = n / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == j) && (i + j) == (n - 1))
            {
                box[i][j] = 'X';
            }
            else if (i == j)
            {
                box[i][j] = '\\';
            }

            else if (i + j == n - 1)
            {
                box[i][j] = '//';
            }

            else
            {
                box[i][j] = ' ';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << box[i][j];
        }
        cout << endl;
    }
    return 0;
}