#include <stdio.h>

int prime(int num)
{
    int count = 0;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int num, count;
    printf("enter a number:");
    scanf("%d", &num);
    count = prime(num);

    if (count == 0)
    {
        printf("is prime");
    }
    else
    {
        printf("not prime");
    }
}