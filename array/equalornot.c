#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {1, 2, 3, 4, 9};
    int flag = 0;

    for (int i = 0; i < 5; i++)
    {

        if (a[i] != b[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("equal");
    }
    else
    {
        printf("not equal");
    }
}