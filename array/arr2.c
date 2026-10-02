#include <stdio.h>
int main()
{
    int a[5];

    // iterate or pint array element using loop
    printf("enter the array element:");
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nthe array elements are :\n");
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", a[i]);
    }
}