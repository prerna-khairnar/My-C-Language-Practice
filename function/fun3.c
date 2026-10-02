#include <stdio.h>
int fun(int);

int main()
{

    int a;
    printf("enter the num\n");
    scanf("%d", &a);

    // int c = fun(a);
    printf("square is %d", fun(a));
}

int fun(int a)
{
    return a * a;
}