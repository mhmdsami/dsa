#include <stdio.h>
#include <malloc.h>

void third_largest(int *arr, int arr_size)
{
    int i, j;
    for (i = 0; i < arr_size; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    printf("%d", arr[2]);
}

int main()
{
    int arr_size, *arr, i;
    scanf("%d", &arr_size);
    arr = (int *)malloc(sizeof(int) * arr_size);
    for (i = 0; i < arr_size; i++)
    {
        scanf("%d", arr + i);
    }
    third_largest(arr, arr_size);
    return 0;
}
