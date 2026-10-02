#include <stdio.h>
struct data
{
    char c;
    char b;
    char d;
    int a;
};

int main()
{
    struct data d;

    printf("size of structure is : %d", sizeof(d));
}
