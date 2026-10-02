#include <stdio.h>

int main()
{
    int i, j, k;
    int n = 10; // total number of rows

    for (i = 1; i <= n; i++)
    {
        // print leading spaces
        for (j = i; j < n; j++)
        {
            printf(" ");
        }

        // print numbers in a triangle form
        for (k = 1; k <= (2 * i - 1); k++)
        {
            printf("%d", i);
        }

        printf("\n"); // move to next line
    }

    return 0;
}