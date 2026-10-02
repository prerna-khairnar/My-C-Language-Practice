
#include <stdio.h>
#pragma pack(1)
struct data
{
    // double m;
    // int a;
    // char d;

    int a;
    char b;
    int c;
    char d;
    char f;
};

int main()
{
    struct data d;

    printf("size of structure is : %d", sizeof(d));
}
