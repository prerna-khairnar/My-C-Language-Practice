#include <stdio.h>

// Function to print natural numbers from 1 to n
void printNatural(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d are:\n", n);
    printNatural(n); // call the function

    return 0;
}
