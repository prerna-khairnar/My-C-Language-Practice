#include <stdio.h>
int main()
{
    int a, b;
    char ch;

    printf(" character : '+' , '-' , '*' , '/'\n");

    printf("enter 2 numbers for arithmatic operation:\n ");
    scanf("%d%d", &a, &b);

    printf("enter a character:");
    scanf(" %c", &ch);

    switch (ch)
    {
    case '+':
        printf("%d\n", a + b);
        break;

    case '-':
        printf("%d\n", a - b);
        break;

    case '*':
        printf("%d\n", a * b);
        break;

    case '/':
        printf("%d\n", a / b);
        break;

    default:
        printf("enter valid character");
    }
}