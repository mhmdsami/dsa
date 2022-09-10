#include <stdio.h>

int main()
{
    int rows, i, j;
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (i ==  rows - 1 || j == 0 || j == i)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
