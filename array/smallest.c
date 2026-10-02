
#include <stdio.h>
int main()
{
    int a[5] = {8, 4, 6, 2, 8};

    int min = a[0];

    // iterate or print array element using loop
    for (int i = 0; i < 5; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("smallest element is:%d", min);
}