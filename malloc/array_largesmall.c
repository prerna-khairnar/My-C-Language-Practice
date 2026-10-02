#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the size of array : ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));

    printf("enter the %d elment of array", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("element is :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    int max = ptr[0];
    int min = ptr[0];

    for (int i = 0; i < n; i++)
    {
        if (ptr[i] > max)
        {
            max = ptr[i];
        }
        if (ptr[i] < min)
        {
            min = ptr[i];
        }
    }
    printf("\nlargest number is : %d \n", max);
    printf("smallest number is : %d \n", min);
}
