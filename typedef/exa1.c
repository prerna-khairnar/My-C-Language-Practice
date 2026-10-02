#include <stdio.h>
int main()
{
    typedef int integer;
    integer a = 10;

    printf("%d\n", a);

    typedef char ch;
    ch c = 'c';
    printf("%c", c);
}