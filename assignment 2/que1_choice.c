#include <stdio.h>

int add(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mul(int num1, int num2)
{
    return num1 * num2;
}

int div(int num1, int num2)
{
    return (float)num1 / num2;
}

int main()
{
    int choice, num1, num2;

    printf("enter 1st number:");
    scanf("%d", &num1);

    printf("\nenter 2nd number:");
    scanf("%d", &num2);

    printf("\nchoose operation");
    printf("1.addition\n2.substraction\n3.multiplication\n4.division\n");
    printf("enter choice which operation you want perform on numbers:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("%d", add(num1, num2));
        break;

    case 2:
        printf("%d", sub(num1, num2));
        break;

    case 3:
        printf("%d", mul(num1, num2));
        break;

    case 4:
        printf("%f", div(num1, num2));
        break;

    default:
        printf("invalid choice");
    }
}