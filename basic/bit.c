#include <stdio.h>
int main()
{
    /// set bit
    int a = 12; // 1100
    // printf("%d", a | (1 << 1)); //1110 //14

    // clear bit
    // printf("%d", a & ~(1 << 3)); // 0100//4

    // toggle bit
    // printf("%d", a ^ (1 << 0)); //1101 //13

    // check LSB
    // int b = 14;
    // printf("%d", b & 1);

    // check nth bit
    // printf("%d", (a >> 2) & 1);

    // check MSB
    // printf("%d", (a >> 31) & 1);

    //~a
    printf("%d", ~a);
}