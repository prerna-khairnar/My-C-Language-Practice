#include <stdio.h>
int main()
{
    int arr[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }

    int flag = 0;
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {

            if (arr[r][c] != 0)
            {
                flag = 1;
            }
                }
    }
    if (flag == 0)
    {
        printf(" matrix is null");
    }
    else
    {
        printf(" matrix is not null");
    }
}