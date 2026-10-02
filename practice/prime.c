#include <stdio.h>

int main()
{
    int n, i, count = 0;

    for (int n = 1; n <= 100; n++)
    {
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d ", n);
        }
    }
}