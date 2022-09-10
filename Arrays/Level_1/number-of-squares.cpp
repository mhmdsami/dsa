#include <iostream>
#include <malloc.h>
using namespace std;

int main()
{
    int q, i = 0, *number_of_squares;
    cin >> q;
    number_of_squares = (int *)malloc(sizeof(int) * q);
    for (i = 0; i < q; i++)
    {
        int start, stop, j = 0, k = 0;
        cin >> start >> stop;
        number_of_squares[i] = 0;
        for (j = start; j <= stop; j++)
        {
            for (k = 1; k < j; k++)
            {
                if (k * k == j)
                {
                    number_of_squares[i]++;
                }
            }
        }
    }
    for (i = 0; i < q; i++)
    {
        cout << number_of_squares[i] << endl;
    }
    return 0;
}