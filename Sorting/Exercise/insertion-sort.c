#include <stdio.h>
#include <malloc.h>

void insertion_sort(int *arr, int arr_size);
void print_array(int *arr, int arr_size);

int main()
{
    int *arr, arr_size;
    printf("Enter the size of the array: ");
    scanf("%d", &arr_size);
    arr = (int *)malloc(sizeof(int) * arr_size);
    for (int i = 0; i < arr_size; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Entered Array\n");
    print_array(arr, arr_size);
    insertion_sort(arr, arr_size);
    printf("Sorted Array\n");
    print_array(arr, arr_size);
    return 0;
}

void insertion_sort(int *arr, int arr_size)
{
    for (int i = 1; i < arr_size; i++)
    {
        int tmp = arr[i];
        int j = i - 1;
        while (tmp < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = tmp;
    }
}

void print_array(int *arr, int arr_size)
{
    printf("[");
    for (int i = 0; i < arr_size; i++)
    {
        printf("%d", arr[i]);
        if (i != arr_size - 1)
            printf(", ");
    }
    printf("]\n");
}
