#include <stdio.h>

int main()
{
    int a, b, c, sum;
    float avg;

    printf("enter 3 numbers :");
    scanf("%d%d%d", &a, &b, &c);

    sum = a + b + c;
    printf("sum of numbers is:%d\n", sum);

    avg = a + b + c / 3;
    printf("avg of numbers is:%.2f", avg);
}