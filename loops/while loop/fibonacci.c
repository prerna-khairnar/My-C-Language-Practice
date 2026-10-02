#include <stdio.h>
int main()
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < 10; i++)
    {
        int c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}