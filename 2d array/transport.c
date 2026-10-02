#include <stdio.h>
int main()
{
    int arr[3][3];
    int b[3][3];

    for (int r = 0; r < 3; r++)
    {
        printf("enter the %d row element:", r + 1);
        for (int c = 0; c < 3; c++)
        {
            scanf("%d", &arr[r][c]);
                }
    }

    printf("output matrix is:\n");
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }

    printf("copied matrix is:\n");
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            b[r][c] = arr[r][c];
            printf("%d ", arr[c][r]);
        }
        printf("\n");
    }
}