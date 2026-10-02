#include <stdio.h>
int find(int);

int find(int a)
{
    if (a % 2 == 0)
    {
        printf("even number: %d", a);
    }
    else
    {
        printf("odd number: %d", a);
    }
}

int main(int a)
{
    printf("enter a number:");
    scanf("%d", &a);
    find(a);
}