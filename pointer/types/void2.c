#include <stdio.h>
int main()
{
    int a = 10;
    char ch = 'c';
    float f = 33.33;

    void *ptr;

    ptr = &a;
    printf("%d\n", *(int *)ptr);

    ptr = &ch;
    printf("%c\n", *(char *)ptr);

    ptr = &f;
    printf("%f", *(float *)ptr);
}