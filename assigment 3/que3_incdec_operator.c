#include <stdio.h>
int main()
{
    int i = 5, k;

    k = i++;
    printf(" k : %d , i : %d\n", k, i);

    k = ++i;
    printf(" k : %d , i : %d\n", k, i);

    int x = 10, y;

    y = x++ * 10;
    printf(" y : %d , x : %d\n", y, x);

    y = ++x * 10;
    printf(" y : %d , x : %d\n", y, x);

    int p = 25, q;

    q = p-- / 3;
    printf(" q : %d , p : %d\n", q, p);

    q = --p / 3;
    printf(" q : %d , p : %d\n", q, p);

    // k=i++, k=++i
    // y=x++*10, y=++x*10
    //  q=p--/3, q=—p/3
}