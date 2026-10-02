#include <stdio.h>
int main()
{
    int arr[3][3];

    printf("enter 1st matrix :");
    for (int r = 0; r < 3; r++)
    {
        // printf("enter the %d row element:", r + 1);
        for (int c = 0; c < 3; c++)
        {
            scanf("%d", &arr[r][c]);
        }
    }

    printf("matrix:\n");
    for (int r = 0; r < 3; r++)
    {

        for (int c = 0; c < 3; c++)
        {
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }

    printf("diagonal elements are :\n");
    for (int r = 0; r < 3; r++)
    {

        for (int c = 0; c < 3; c++)
        {
            if (r == c)
            {
                printf("%d", arr[r][c]);
            }
        }
        printf("\n");
    }

    int sum = 0;
    for (int r = 0; r < 3; r++)
    {

        for (int c = 0; c < 3; c++)
        {
            if (r == c)
            {
                sum += arr[r][c];
            }
        }
    }
    printf("summation of diagonal elements are:%d\n", sum);
}