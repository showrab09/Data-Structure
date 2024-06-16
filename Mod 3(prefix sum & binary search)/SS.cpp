#include <stdio.h>
int main()
{

    int n;
    // size of array
    scanf("%d", &n);

    int arr[n];
    // taking input for array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}