#include <iostream>
#include <malloc.h>
using namespace std;

void sort(int n, int *arr)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
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
    cin >> t;
    while (t--)
    {
        int n, i, *sizes;
        cin >> n;
        sizes = (int *)malloc(sizeof(int) * n);
        for (i = 0; i < n; i++)
        {
            cin >> sizes[i];
        }
        sort(n, sizes);
        int total_treats = 0, number_of_treats = 1, largest = sizes[0];
        for (i = 0; i < n; i++)
        {
            if (sizes[i] > largest)
            {
                largest = sizes[i];
                number_of_treats++;
            }
            total_treats += number_of_treats;
        }
        cout << total_treats << endl;
    }
    return 0;
}