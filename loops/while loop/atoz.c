#include <stdio.h>
int main()
{
    char ch = 'A';

    while (ch <= 'Z')
    {
        printf(" %c ", ch);
        printf(" %d\n ", ch);
        ch++;
    }
}