#include <stdio.h>
#include <malloc.h>

void sort(int *arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
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
        int n, b, i, sum = 0, count = 0, *a;
        scanf("%d %d", &n, &b);
        a = (int *)malloc(sizeof(int) * n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        sort(a, n);
        for (i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum <= b)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
