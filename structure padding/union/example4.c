#include <stdio.h>
struct demo
{
    short s[5];
    union
    {
        float y;
        long z;
    } u;
} t;
int main()
{

    printf("size of struct is : %d", sizeof(t));
}