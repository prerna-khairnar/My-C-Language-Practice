#include <stdio.h>
struct abc
{
    int a;
    char b;
    float c;
};

int main()
{
    struct abc a;
    printf("size of struct is : %d", sizeof(a));
}