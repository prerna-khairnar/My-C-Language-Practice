#include <stdio.h>
int main()
{
    int a = 25;

    if (a % 5 == 0 && a % 11 == 0)
    {
        printf("number is divisiblr by 5 & 11");
    }
    else
    {
        printf("not divisible");
    }
}