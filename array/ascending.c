#include <stdio.h>
int main()
{
    int arr[7] = {3, 4, 6, 7, 9, 1, 2};

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            // if (arr[i] < arr[j]) //ascending
            if (arr[i] > arr[j]) // descending
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
}