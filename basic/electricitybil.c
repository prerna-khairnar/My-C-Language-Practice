#include <stdio.h>
int main()
{
    int unit;
    printf("enter unit are used:");
    scanf("%d", &unit);
    float b = 0;

    if (unit < 50)
    {
        b = (unit * 0.50);
    }
    else if (unit < 150)
    {
        b = (50 * 0.50) + ((unit - 50) * 0.75);
    }
    else if (unit < 250)
    {
        b = (50 * 0.50) + (100 * 0.75) + ((unit - 150) * 1.20);
    }
    else
    {
        b = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((unit - 250) * 1.50);
    }
    printf("%f ", b);
}