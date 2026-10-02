#include <stdio.h>

void main()
{
    int a = 10;
    int b = 20;

    printf("before swaping \n a:%d\n b:%d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("after swaping \n a:%d\n b:%d", a, b);
}