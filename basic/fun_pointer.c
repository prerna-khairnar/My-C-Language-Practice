#include <stdio.h>
void add();
int main()
{
    void (*f_ptr)(int, int);

    f_ptr = add;
    f_ptr(10, 20);
}
void add(int a, int b)
{
    int c = a + b;
    printf("addition is %d", c);
}