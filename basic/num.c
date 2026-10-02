#include <stdio.h>
int main()
{
    int a, b, c, temp;
    printf("enter a numbers:");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        printf(" %d is greater than %d or %d", a, b, c);
    }
    else if (b > c)
    {
        printf(" %d is greater than %d or %d", b, a, c);
    }
    else
    {
        printf(" %d is greater than %d or %d", c, a, b);
    }
}