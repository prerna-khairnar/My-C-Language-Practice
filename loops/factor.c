#include <stdio.h>
int main()
{
    int num = 20;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
}