#include <stdio.h>
int main()
{
    int a[5] = {2, 4, 6, 7, 8};

    int sum = 0; // update index 0

    // iterate or pint array element using loop
    for (int i = 0; i <= 4; i++)
    {
        sum = sum + a[i];
        printf("addition is:%d\n", sum);
    }

    // printf("addition of array element:%d", sum);
}