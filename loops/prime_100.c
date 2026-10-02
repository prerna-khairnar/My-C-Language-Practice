// print prime number 1to 100

#include <stdio.h>
int main()
{
    int i, j;
    int num = 100;

    printf("print prime number 1 to 100:");
    for (i = 2; i <= num; i++)
    {
        int count = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }

        if (count == 0)
        {
            printf("%d ", i);
        }
    }
}