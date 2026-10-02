#include <stdio.h>
#define even_odd(c) (c % 2 == 0 ? 0 : 1)

int main()
{

    int a = 2;
    int b = even_odd(a);

    if (b == 0)
    {
        printf("%d is even number", a);
    }
    else
    {
        printf("%d is odd number", a);
    }
}