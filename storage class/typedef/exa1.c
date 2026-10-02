#include <stdio.h>

int main()
{
    typedef char charactor;
    charactor ch = 'c';
    printf("%c\n", ch);

    typedef int techno; // create alias name for data type
    techno m = 90;      // int m=90;  both are same thing
    printf("%d\n", m);
}