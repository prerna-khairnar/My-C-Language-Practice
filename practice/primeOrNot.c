#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("enter the number :");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    printf("%d is count\n", count);

    if (count == 2)
    {
        printf("%d is prime number", num);
    }
    else
    {
        printf("%d is not prime number", num);
    }
}