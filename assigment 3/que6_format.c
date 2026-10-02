#include <stdio.h>
int main()
{

    int a = 2;
    float b = 3.4;

    printf("value of a\n ");
    printf(" a : %d\n", a);
    printf(" a : %5d\n", a);
    printf(" a : %05d\n", a);
    printf(" a : %-5d\n", a);

    printf("\nvalue of b\n ");
    printf(" b : %f\n", b);
    printf(" b : %.2f\n", b);
    printf(" b : %8.2f\n", b);
    printf(" b : %.02f\n", b);

    //     Implement a C program using formatted I/O using printf (%5d, %05d,
    // %-5d,%8.2f, %.2f etc.)
}