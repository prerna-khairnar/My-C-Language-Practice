#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 3, 4, 6, 7};
    int n = 10;

    printf("array element before delete dublicate element:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    printf("\narray element after delete dublicate element:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}