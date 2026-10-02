#include <stdio.h>

int main()
{
    typedef float integer;
    integer p, r, t, si;

    printf("enter principle amount : ");
    scanf("%f", &p);

    printf("enter rate of interest : ");
    scanf("%f", &r);

    printf("enter time : ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    printf("simple interest is : %f", si);
}