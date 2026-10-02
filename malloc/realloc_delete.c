#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter the number of element in array :"); // 10
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int)); //(5*4)=20 //calloc(5,5)

    printf("enter the %d element : ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    int new;
    printf("enter the element in array you want to delete:"); // 5
    scanf("%d", &new);

    ptr = (int *)realloc(ptr, new * sizeof(int));

    printf("array element are : \n");
    for (int i = 0; i < new; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);
}