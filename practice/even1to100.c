#include <stdio.h>
int main()
{
    int i;

    printf("odd numbers \n");

    // for (i = 1; i <= 100; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         printf(" even : %d ", i);
    //     }
    // }

    for (i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
}