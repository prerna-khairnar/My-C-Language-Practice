#include <stdio.h>
int main()
{
    // int a;

    // void *ptr = 10;

    // char ch = 'c';
    // void *ptr = &ch;

    char ch = 'c';
    int a = 99;
    void *ptr = &ch;
    ptr = &a;

    printf("%d", *(int *)ptr);
}