#include <stdio.h>
int main()
{
    int arr[3];

    printf("enter 3 numbers :");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nenter numbers are :");
    for (int i = 0; i < 3; i++)
    {
        printf(" %d\n", arr[i]);
    }

    int sum = 0;
    float avg;

    for (int i = 0; i < 3; i++)
    {
        sum += arr[i];
    }
    printf("total addition of array is : %d\n", sum);

    avg = sum / 3.0;
    printf("avrage is : %.2f", avg);
}