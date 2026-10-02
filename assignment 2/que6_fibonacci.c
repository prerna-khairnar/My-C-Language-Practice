#include <stdio.h>
int main()
{
    int a = 0;
    int b = 1, range;

    printf("enter the range:");
    scanf("%d", &range);

    printf("%d%d", a, b);

    for (int i = 2; i < range; i++)
    {
        int c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}