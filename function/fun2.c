// return type - no arguement

#include <stdio.h>
int fun();

int main()
{

    int d = fun();
    printf("addition is %d\n", d);

    printf("addition is %d", fun());
}

int fun()
{
    int a = 70;
    int b = 90;
    int c = a + b;
    return c;
}