#include <stdio.h>
int main()
{
    int a;
    int b;
    char ch;

    printf("enter a numbers:\n");
    scanf("%d", &a);
    printf("enter a numbers:\n");
    scanf("%d", &b);

    printf("enter a character:");
    scanf(" %c", &ch);

    if (ch == '+')
    {
        printf("%d", a + b);
    }
    if (ch == '-')
    {
        printf("%d", a - b);
    }
    if (ch == '*')
    {
        printf("%d", a * b);
    }
    if (ch == '/')
    {
        printf("%d", a / b);
    }
}