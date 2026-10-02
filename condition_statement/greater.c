#include <stdio.h>
int main()
{
    int a = 90;
    int b = 67;
    int c = 45;

    if (a > b && a > c)
    {
        printf("%d is greater that %d and %d \n", a, b, c);
    }
    if (b > a && b > c)
    {
        printf("%d is greater that %d and %d \n", b, a, c);
    }
    if (c > b && c > a)
    {
        printf("%d is greater that %d and %d \n", c, b, a);
    }
}
