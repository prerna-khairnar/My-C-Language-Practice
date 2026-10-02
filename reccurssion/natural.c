#include <stdio.h>
void natural(int a, int n)
{
    if (a > n)
    {
        return;
    }
    printf("%d ", a);

    natural(a + 1, n);
}

int main()
{
    int a = 1, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d are:\n", n);
    natural(a, n); // call the function
}
