#include <stdio.h>
int main()
{
    int arr[3][3];
    int b[3][3];

    printf("enter 1st matrix :");
    for (int r = 0; r < 3; r++)
    {
        printf("enter the %d row element:", r + 1);
        for (int c = 0; c < 3; c++)
        {
            scanf("%d", &arr[r][c]);
        }
    }

    printf("enter 2nd matrix :");
    for (int r = 0; r < 3; r++)
    {
        printf("enter the %d row element:", r + 1);
        for (int c = 0; c < 3; c++)
        {
            scanf("%d", &b[r][c]);
        }
    }

    printf("output 1st matrix is:\n");
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }

    printf("output 2nd matrix is:\n");
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", b[r][c]);
        }
        printf("\n");
    }

    int flag = 0;
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)

            if (arr[r][c] != b[r][c])
            {
                flag = 1;
                break;
            }
    }

    if (flag == 0)
    {
        printf(" array are equal");
    }
    else
    {
        printf("array are not equal");
    }
}