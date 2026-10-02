#include <stdio.h>
void fun(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 22;
    int b = 10;

    printf("before swapping\n");
    printf("A is : %d\n B is : %d\n", a, b);
    fun(&a, &b);
    printf("after swapping\n");
    printf("A is : %d\n B is : %d", a, b);
}