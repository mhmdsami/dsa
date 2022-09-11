#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void sort(int *arr, int arr_size)
{
    int i, j;
    for (i = 0; i < arr_size; i++)
    {
        for (j = i; j < arr_size; j++)
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
    int n, i, *arr, sum = 0;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    for (i = 0; i < n; i++)
    {
        sum += abs(arr[i] - i - 1);
    }
    printf("%d", sum);
    return 0;
}