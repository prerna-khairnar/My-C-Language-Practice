#include <stdio.h>
int main()
{
    int size;
    printf("enter the size of array:");
    scanf("%d", &size); // 5

    int a[size];
    printf("\nenter the array element:\n");
    for (int i = 0; i < size - 1; i++) // loop are use array element //4
    {
        scanf("%d", &a[i]);
    }

    // iterate or print array element using loop
    printf("array element before adding:");
    for (int i = 0; i < size - 1; i++) // loop are use for index
    {
        printf("%d ", a[i]);
    }

    int index, num;
    printf("\nenter number u want to add:");
    scanf("%d", &num);
    printf("\nenter index u want to insert:");
    scanf("%d", &index);

    for (int i = size; i >= index; i--)
    {
        a[i] = a[i - 1];
    }

    a[index] = num;
    // size++;
    printf("\narray element after inset new element:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}