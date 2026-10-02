#include <stdio.h>

void reverse(int arr[], int size);

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};

    int size = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void reverse(int arr[], int size)
{
    int last = size - 1;

    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[last - i];
        arr[last - i] = temp;
    }
}
