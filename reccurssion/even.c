#include <stdio.h>

void natural(int a, int b)
{
    if (a > b)
    {
        return;
    }
    printf("%d ", a);
    natural(a + 2, b); // recursive call
}

int main()
{
    int a = 10;
    int b = 50;

    if (a % 2 != 0)
    {
        a++; // Start from next even number if 'a' is odd
    }

    natural(a, b);

    return 0;
}
