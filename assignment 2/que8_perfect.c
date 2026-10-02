#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find sum of all positive divisors
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0) // if i divides num
        {
            sum += i; // add divisor to sum
        }
    }

    // Check if half of sum equals original number
    if ((sum / 2) == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);

    return 0;
}
