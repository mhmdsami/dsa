#include <stdio.h>
#include <malloc.h>

void sort(int *arr, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, k, i, *arr;
        scanf("%d %d", &n, &k);
        arr = (int *)malloc(sizeof(int) * n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr, n);
        printf("%d\n", arr[0] - k > 0 ? arr[0] - k : -1);
    }
    return 0;
}
