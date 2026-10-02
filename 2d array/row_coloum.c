#include <stdio.h>
int main()
{
    int arr[3][3] = {{20, 99, 55}, {40, 67, 88}, {22, 90, 45}};

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }
}