#include <stdio.h>
int main()
{
    int arr[10] = {3, 2, 5, 7, 9, 6, 8, 99, 44, 40};

    printf("array before delete number:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    int num;
    printf("enter the number that you want to delete:");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == num)
        {
            printf("%d number are found at index %dth\n", arr[i], i);
            for (int j = i; j < 10; j++) // start second loop
            {
                arr[j] = arr[j + 1];
            }
        }
    }
    printf("array after delete number %d:", num);
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }
}