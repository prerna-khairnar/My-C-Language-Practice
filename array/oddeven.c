#include <stdio.h>

int main()
{
    int arr[] = {3, 1, 4, 91, 29, 99, 88, 90, 33};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Even: ");
    for (int i = 0; i < size; i++)
    {

        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]); // space after each number
        }
    }

    printf("\nOdd: ");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]); // space after each number
        }
    }

    return 0;
}
