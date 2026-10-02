#include <stdio.h>

void main()
{
    int yr;

    printf("enter the year :");
    scanf("%d", &yr);

    if (yr % 4 == 0)
    {
        printf("%d is leap year", yr);
    }
    else
    {
        printf("%d is not leap year", yr);
    }
}