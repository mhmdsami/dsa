#include <stdio.h>
#include <malloc.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, d, i, *days;
        scanf("%d %d", &n, &d);
        days = (int *)malloc(sizeof(int) * n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &days[i]);
        }
        for (i = n - 1; i >= 0; i--)
        {
            d -= d % days[i];
        }
        printf("%d\n", d);
    }
    return 0;
}