#include <stdio.h>
int main()
{
    int arr[10] = {3, 2, 5, 7, 9, 6, 8, 99, 44, 40};

    int num, found = 0;
    printf("enter the number that you want to search:");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == num)
        {
            printf("%d number are found at index %d", arr[i], i);
            found = 1;
        }
    }
    if (found == 0)
    {
        printf("Element not found in the array.\n");
    }
}
