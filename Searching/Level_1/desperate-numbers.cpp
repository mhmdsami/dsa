#include <iostream>
#include <cmath>
using namespace std;

int binarySearch(int low, int high, int key)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int x = (mid * (mid + 1));
        if (x < key)
            low = mid + 1;
        else if (x > key)
            high = mid - 1;
        else
            return mid;
    }
    return -1;
}

int main()
{
    int n, i, b;
    int flag = 0;
    cin >> n;
    for (i = 1; i <= sqrt(n); i++)
    {
        b = n - ((i * (i + 1)) / 2);
        int y = binarySearch(1, sqrt(2 * b), 2 * b);
        if (y > 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
