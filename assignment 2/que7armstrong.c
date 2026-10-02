#include <stdio.h>
#include <math.h>

int main()
{
    int num, rem;
    int sum = 0;

    printf("enter a number:");
    scanf("%d", &num);
    int original = num;

    while (num != 0)
    {
        rem = num % 10;          // get last digit
        sum = sum + pow(rem, 4); // cube
        num = num / 10;          // remove last digit
    }
    if (sum == original)
    {
        printf("%d is armstrong number", original);
    }
    else
    {
        printf("%d is not armstrong number", original);
    }
}