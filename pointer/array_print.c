#include <stdio.h>
int main()
{
    int arr[] = {4, 7, 12, 9, 78};
    int *ptr = arr;

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {

        printf("%d ", *(ptr + i));
        printf("%d ", ptr[i]);
    }
    printf("\n%d ", ptr);
    printf("\n%d ", &arr);
    printf("\n%d ", &arr[0]);
}