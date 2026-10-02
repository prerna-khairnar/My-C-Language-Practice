#include <stdio.h>
int add(int a, int b);
int main()
{
    int (*f_ptr)(int, int);

    f_ptr = add;
    int c = f_ptr(10, 20);
    printf("%d", c);
}
int add(int a, int b)
{
    return a + b;
}