#include <stdio.h>
#include <math.h>

int main()
{

    int num = 370;
    int sum = 0;
    int original = num;

    while (num != 0)
    {
        int rem = num % 10;
        sum = sum + pow(rem, 3);
        num = num / 10;
    }

    if (sum == original)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }
}