#include <stdio.h>
#define square(a) (a * a)

int main()
{
    int a = square(5);
    printf("%d\n", a);
    printf("%d", square(10));
}