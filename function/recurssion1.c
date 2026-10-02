#include <stdio.h>

void num(int a)
{

    // base case //termination condition
    if (a == 0)
    {
        return;
    }
    printf("%d ", a);
    num(a - 1); // recursive function call
}
void mul(int a)
{
    if (a == 20)
    {
        return;
    }
    printf("\n%d ", a);
    num(a + 1);
}
int main()
{
    num(10);
    mul(0);
}