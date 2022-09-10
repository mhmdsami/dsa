#include <iostream>
#include <malloc.h>
using namespace std;

int main()
{
    int n, *arr, i = 0, temp = 0;
    cin >> n;
    arr = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}