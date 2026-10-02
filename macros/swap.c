#include <stdio.h>

#define swap(a, b)    \
    {                 \
        int temp = a; \
        a = b;        \
        b = temp;     \
    }

int main()
{
    int a = 10;
    int b = 30;

    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(a, b); // call macro (no return value)

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
