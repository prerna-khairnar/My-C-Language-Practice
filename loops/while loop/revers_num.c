#include <stdio.h>
int main()
{
    int num = 12345;

    while (num != 0)
    {
        int rem = num % 10;
        printf("%d ", rem);
        num = num / 10;
    }
}