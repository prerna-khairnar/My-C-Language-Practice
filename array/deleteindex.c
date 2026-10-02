#include <stdio.h>
int main()
{
    int size;
    printf("enter the size of array:");
    scanf("%d", &size);

    int a[size];
    printf("\nenter the array element:\n");
    for (int i = 0; i < size; i++) // loop are use array element
    {
        scanf("%d", &a[i]);
    }

    // iterate or print array element using loop
    printf("array element before delete:");
    for (int i = 0; i < size; i++) // loop are use for index
    {
        printf("%d ", a[i]);
    }

    int index;
    printf("\nenter index u want to delet:");
    scanf("%d", &index);
    if (index > size)
    {
        printf("index are not found");
    }
    else
    {

        for (int i = index; i < size; i++)
        {
            a[i] = a[i + 1];
        }

        printf("\narray element after delete:");
        for (int i = 0; i < size - 1; i++) // loop are use for index
        {
            printf("%d\n", a[i]);
        }
    }
}
