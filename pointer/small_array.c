#include <stdio.h>
int main()
{
    int arr[] = {4, 7, 12, 9, 78};
    int *ptr = arr;

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {

        printf("%d ", ptr[i]);
    }

    int min = *ptr;
    for (int i = 0; i < 5; i++)
    {
        if (*(ptr + i) < min)
        {
            min = *(ptr + i);
        }
    }
    printf("\n%d is smallest element", min);

    int max = *ptr;
    for (int i = 0; i < 5; i++)
    {
        if (*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
    }
    printf("\n%d is largest element", max);
}
