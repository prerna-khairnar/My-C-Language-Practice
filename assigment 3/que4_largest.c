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
        printf(" %d", arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("\nlargest number is %d ", max);

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("\nsmallest number is %d ", min);
}