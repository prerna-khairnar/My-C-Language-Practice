
#include <stdio.h>
int main()
{
    int a[5] = {8, 4, 6, 2, 99};

    int max = a[0];
    int min = a[0];

    // iterate or print array element using loop
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        else if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("largest element is:%d\n smallest element is:%d", max, min);
}