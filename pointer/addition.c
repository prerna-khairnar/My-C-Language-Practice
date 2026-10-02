#include <stdio.h>
int main()
{
    int a = 22;
    int b = 101;

    int *ptr1 = &a;
    int *ptr2 = &b;

    int c = *ptr1 + *ptr2;
    printf("addition is : %d", c);
}