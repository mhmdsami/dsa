#include <iostream>
#include <malloc.h>
using namespace std;

int main()
{
    int n, *arr, sum = 0, count = 0, i = 0, j = 0;
    cin >> n;
    arr = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> sum;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                count += 1;
                cout << "[" << arr[i] << " " << arr[j] << "]" << endl;
            }
        }
    }
    cout << "Total Number of Pairs:" << count;
}