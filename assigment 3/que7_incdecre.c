#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int c = 30, d;

    printf("a : %d , b : %d , C : %d\n", a, b, c);

    d = ++a;
    printf("d : %d\n", d);

    d = ++b;
    printf("d : %d\n", d);

    d = ++c;
    printf("d : %d\n", d);

    d = a + 5;
    printf("d : %d\n", d);

    d = a++;
    printf("d : %d\n", d);

    //     d=++a,++b,++c,a+5;
    // d=(++a,++b,++c,a+5);
}