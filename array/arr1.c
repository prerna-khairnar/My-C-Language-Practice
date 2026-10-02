#include <stdio.h>
int main()
{
    int a[5] = {2, 4, 6, 7, 8};

    a[0] = 10; // update index 0

    // iterate or pint array element using loop
    for (int i = 0; i <= 4; i++) // loop are use for index
    {
        printf("%d ", a[i]);
    }

    printf("\n print address of array elements are :");
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", &a[i]); // print adress of array index
    }
}