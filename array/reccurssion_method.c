#include <stdio.h>

void array(double arr[], int index)
{
    if (index >= 5)
    {
        return;
    }
    printf("%.1lf ", arr[index]);
    array(arr, index + 1);
}

void main()
{
    double arr[] = {2.1, 4.2, 6.3, 1.4, 8.5};
    int index = 0;

    // You declare a double array with 5 elements.
    // sizeof(arr) → total memory occupied by the array (each double = 8 bytes).
    // sizeof(arr) = 8 × 5 = 40 bytes
    // sizeof(arr[0]) = size of one element (8 bytes)
    // sizeof(arr) / sizeof(arr[0]) = 40 / 8 = 5
    printf("%d is the size of array\n", sizeof(arr) / sizeof(arr[0]));

    // printf("%d is the size of array", sizeof(arr) / 4);  //sizeof metho
    array(arr, index);
}