#include <stdio.h>

int main()
{
    int a[5] = {11, 66, 23, 89, 45};
    int b[5];
    // int c[10];

    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    printf("copied array is:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }
}
