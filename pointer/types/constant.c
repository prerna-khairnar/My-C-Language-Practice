#include <stdio.h>
int main()
{
    int a = 20;
    int b = 30;

    int *const ptr = &a; // constant pointer

    printf("%d\n", *ptr);
    printf("%d\n", ptr); // 6422292 pointer value is constant

    // ptr = &b; // not valid// because pointer is constant

    *ptr = 123; // update the value of a
    printf("%d\n", *ptr);
    printf("%d", ptr); // 6422292 pointer value is constant
}