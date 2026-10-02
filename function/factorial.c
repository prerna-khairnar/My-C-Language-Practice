#include <stdio.h>
int find(int);

int find(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {

        fact = fact * i;
    }
    printf("%d ", fact);
}

int main()
{
    int a;
    printf("enter a number:");
    scanf("%d", &a);
    find(a);
}