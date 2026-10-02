#include <stdio.h>

void add();
void sub();

int a, b;

int main()
{
    add();
    sub();
}

void add()
{
    printf("enter two number for addition:");
    scanf("%d%d", &a, &b);

    int c = a + b;
    printf("addition is %d:\n", c);
}

void sub()
{
    printf("enter two number for sustraction\n:");
    scanf("%d%d", &a, &b);

    int c = a - b;
    printf("addition is %d:", c);
}