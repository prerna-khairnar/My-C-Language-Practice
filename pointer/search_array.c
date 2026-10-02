
#include <stdio.h>
int main()
{
    int arr[5];
    int *ptr = arr;

    printf("enter array element :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("array element are :");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }

    int num;
    printf("\nenter number you want to search :");
    scanf("%d", &num);
    for (int i = 0; i < 5; i++)
    {
        if (*(ptr + i) == num)
        {
            printf("%d is find at %dth position", num, i);
        }
    }
}