#include <stdio.h>

int main()
{
    int sum = 0, num;

    printf("enter the number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("sum is : %d ", sum);
}