#include <stdio.h>
int main()
{
    int sum = 0;
    int i;

    for (i = 1; i <= 4; i++)
    {
        sum = sum + i;
        printf("%d", sum);
    }
}