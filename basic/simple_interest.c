#include <stdio.h>
int main()
{
    int p, r, t;
    int result;

    printf(" enter principle:\n");
    scanf("%d", &p);

    printf(" enter rate:\n");
    scanf("%d", &r);

    printf(" enter time:\n");
    scanf("%d", &t);

    result = (p * r * t) / 100;
    printf("simple interest is %.2f:", (float)result);
}