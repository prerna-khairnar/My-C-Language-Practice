#include <stdio.h>
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10) + sum(n / 10);
    }
}

int main()
{
    int num = 123;
    int a = sum(num);
    printf("sum of digit is %d", a);
}