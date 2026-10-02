#include <stdio.h>
int diameter(int);
int circumference(int);
int area(int);

int main()
{

    int r;
    printf("enter radius of circle ");
    scanf("%d", &r);

    // int c = fun(a);
    printf("diameter is %d\n", diameter(r));
    printf("circumference is %d\n", circumference(r));
    printf(" area is %d", area(r));
}

int diameter(int r)
{

    int a = 2 * r;
    return a;
}

int circumference(int r)
{
    int b = 2 * 3.14 * r;
    return b;
}

int area(int r)
{
    int c = 3.14 * r * r;
    return c;
}
