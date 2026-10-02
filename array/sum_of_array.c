#include <stdio.h>

int sum = 0;
void array(int arr[], int index)
{
    if (index == 0)
    {
        return;
    }

    sum = sum + arr[index];
    array(arr, index - 1);
}

void main()
{
    int arr[] = {3, 1, 90, 91, 29, 99};

    array(arr, 5);
    printf("%d", sum);
}