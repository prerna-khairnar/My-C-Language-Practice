#include <stdio.h>
int main()
{
    int arr[] = {4, 7, 12, 9, 78};
    int *ptr = arr;

    for (int i = 4; i >= 0; i--)
    {

        printf("%d ", ptr[i]); //*(ptr+i);
    }

    int sum = 0;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {

        sum += ptr[i]; //*(ptr+i);
    }
    printf("\n addition is : %d", sum);
}
