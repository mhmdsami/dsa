#include <stdio.h>
int main()
{
    int N, i, j, k;
    printf("Enter the number of rows:");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        if (i % 2 != 0)
            k = 1;
        else
            k = 2;
        for (j = 1; j <= i; j++, k += 2)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}
