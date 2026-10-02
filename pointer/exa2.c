#include <stdio.h>
int main()
{
    int a = 22;
    int b = 101;

    int *ptr = &a;

    int **dptr = &ptr;

    printf("%d\n", a);      // 22
    printf("%d\n", *ptr);   // 22
    printf("%d\n", &a);     // 6422292 add of a
    printf("%d\n", ptr);    // 6422292 add of a
    printf("%d\n", &ptr);   // 6422288 add of ptr
    printf("%d\n", *dptr);  // 6422292 add of ptr
    printf("%d\n", **dptr); // 22
}