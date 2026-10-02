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

    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            // if (*(ptr + i) < *(ptr + j)) //ascending
            if (*(ptr + i) > *(ptr + j)) // descending
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }

    printf("\nSorted array is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }
}