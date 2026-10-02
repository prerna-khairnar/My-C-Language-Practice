#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    // using third variable
    //  printf("before swapping \n");
    //  printf("a = %d  b = %d\n", a, b);

    // int temp = a;
    // a = b;
    // b = temp;

    // printf("after swapping \n");
    // printf("a = %d  b = %d", a, b);

    printf("before swapping \n");
    printf("a = %d  b = %d\n", a, b);

    // a = a + b;
    // b = a - b;
    // a = a - b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("after swapping \n");
    printf("a = %d  b = %d", a, b);
}