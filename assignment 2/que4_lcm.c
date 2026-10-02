#include <stdio.h>

int main()
{
    int a, b, temp, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a;
    int y = b;

    // Find GCD using Euclidean algorithm
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // Find LCM using formula
    lcm = (x * y) / gcd;

    printf("\nGCD of %d and %d = %d", x, y, gcd);
    printf("\nLCM of %d and %d = %d", x, y, lcm);

    return 0;
}
