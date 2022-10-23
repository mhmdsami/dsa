#include <stdio.h>
#include <malloc.h>

void sort(int *arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i, *arr;
        scanf("%d", &n);
        arr = (int *)malloc(sizeof(int) * n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr, n);
        printf("%d\n", arr[0] * arr[1]);
    }
    return 0;
}
