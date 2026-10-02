#include <stdio.h>
int main()
{
    int arr[7] = {2, 3, 2, 4, 5, 4, 2};
    int j = 0;

    for (int i = 0; i < 7; i++)
    {

        if (arr[i] == 2)
        {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
    }
    printf("array element are:");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
}