#include <stdio.h>
int main()
{
    int arr[] = {4, 7, 12, 9, 78};
    int *ptr = arr;

    for (int i = 4; i >= 0; i--)
    {

        printf("%d ", *(ptr + i));
        printf("%d ", ptr[i]);
    }

    int *ptr1 = arr + (sizeof(arr) / sizeof(arr[0])) - 1;
    printf("\n");

    for (int i = 4; i >= 0; i--)
    {

        printf("%d ", *ptr1);
        ptr1--;
    }
}