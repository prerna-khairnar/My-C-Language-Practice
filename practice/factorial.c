#include <stdio.h>

int main()
{
    int fact = 1, n;

    printf("enter the number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    printf("factorial is : %d", fact);
}