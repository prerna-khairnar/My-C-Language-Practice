#include <stdio.h>
#include <string.h>
struct info
{
    int roll;
    char name[10];

    struct sub
    {
        int math;
        int c;
        int vlsi;
    } u;

} i;

int main()
{
    // printf("size of union is : %d",sizeof(u));
    printf("size of structure is : %d\n", sizeof(i));

    i.roll = 22;
    strcpy(i.name, "riya");
    i.u.math = 90;
    i.u.vlsi = 89;
    i.u.c = 88;

    printf("roll no. is : %d\n", i.roll);
    printf("name is : %s\n", i.name);
    printf("math: %d\n", i.u.math);
    printf("c: %d\n", i.u.c);
    printf("vlsi: %d", i.u.vlsi);
}