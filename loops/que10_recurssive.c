#include <stdio.h>

// Recursive function to sum digits
int sumOfDigits(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

// Recursive function to reduce to single digit
int recursiveSum(int n)
{
    if (n < 10) // base case: single digit
        return n;
    else
        return recursiveSum(sumOfDigits(n));
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = recursiveSum(num);

    printf("Recursive sum of digits: %d\n", result);

    return 0;
}
