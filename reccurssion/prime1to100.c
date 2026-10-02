#include <stdio.h>

// Recursive function to check if a number is prime
int isPrime(int n, int i)
{
    if (n < 2)
        return 0; // not prime
    if (i == 1)
        return 1; // prime (no divisors found)
    if (n % i == 0)
        return 0;             // not prime if divisible
    return isPrime(n, i - 1); // check smaller divisor
}

// Recursive function to print all prime numbers up to num
void printPrimes(int start, int end)
{
    if (start > end)
        return; // base case — stop recursion when limit is reached

    if (isPrime(start, start / 2))
        printf("%d ", start);

    printPrimes(start + 1, end); // recursive call for next number
}

int main()
{
    int start, end;
    printf("Enter the start range : ");
    scanf("%d", &start);

    printf("Enter the end range : ");
    scanf("%d", &end);

    printf("Prime numbers from %d to %d are:\n", start, end);
    printPrimes(start, end); // start checking from 2 (first prime)

    return 0;
}
