#include <stdio.h>
struct data
{
    char c;
    int a;
    char str[10];
};

int main()
{
    struct data d;

    printf("size of structure is : %d", sizeof(d));
}
