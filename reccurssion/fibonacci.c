#include <stdio.h>
int fibo(int a, int b, int n)
{
    if (n > 0)
    {
        int c = a + b;
        printf("%d ", c);
        fibo(b, c, n - 1);
    }
    return 0;
}
int main()
{
    int a = 0;
    int b = 1;
    int n = 20;
    printf("%d %d ", a, b);
    fibo(a, b, n);
}

// 0 1 1 2 3 5 8
// 0+1=1 //1+1=2 //1+2=3 //2+3=5