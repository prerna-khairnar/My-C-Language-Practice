#include <stdio.h>
int main()
{
    int num;
    printf(" enter the number:");
    scanf("%d", &num);

    int count = 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    printf("%d is count\n", count);

    if (count == 2)
        printf("%d is prime\n", num);
    else
        printf("%d is not prime\n", num);

    return 0;
}