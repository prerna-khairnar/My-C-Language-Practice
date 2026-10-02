#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int sum = 0;
    float avg;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    avg = (float)sum / size;

    printf("sum = %d\n", sum);
    printf("avg = %.2f", avg);
}