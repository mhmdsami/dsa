#include <iostream>
using namespace std;

void print_numbers(int start, int stop)
{
    int i;
    for (i = start; i <= stop; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int i;
    for (i = 1; i < n; i++)
    {
        int start = i, stop = i, j, sum = 0;
        for (j = i; i < n; j++)
        {
            sum += j;
            stop = j;
            if (sum == n)
            {
                print_numbers(start, stop);
                break;
            }
            else if (sum > n)
            {
                break;
            }
        }
    }
    return 0;
}