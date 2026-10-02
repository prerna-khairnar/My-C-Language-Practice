#include <stdio.h>
#define large(a, b) (a > b ? a : b)

int main()
{
    int a = large(10, 70);
    printf("largest number is : %d", a);
}