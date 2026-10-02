#include <stdio.h>

int main()
{
    int num, digit, rev = 0;

    printf("enter the number : ");
    scanf("%d", &num);

    int ori = num;

    while (num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    printf("sum of number is : %d\n", rev);

    if (ori == rev)
    {
        printf("it is palidrome");
    }
    else
    {
        printf("it is not palidrome");
    }
}