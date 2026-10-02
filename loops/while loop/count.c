#include <stdio.h>
int main()
{
    int num = 12345;
    int count = 0;

    while (num != 0)
    {
        num = num / 10;
        count++;

        printf("%d ", count);
    }
}