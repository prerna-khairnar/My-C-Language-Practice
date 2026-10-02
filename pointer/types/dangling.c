#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 99;
    int *ptr = &a;
    // int **dptr = &ptr;

    free(a); // delete a
    printf("%d", *ptr);
    // printf("%d", **dptr);
}
