#include <stdio.h>
int fun(int n)
{
    if (n == 6)
    {
        return 1;
    }

    return n * fun(n + 1);
}
int main()
{
    int a = 1;
    int r = fun(a);
    printf("%d", r);
}