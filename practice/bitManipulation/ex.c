#include <stdio.h>

int main()
{
    int a = 15;
    int b = 9;
    int d = 10;
    int c = 20;

    a &= 7;
    b |= 3;
    c /= 4;
    d ^= 5;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
}