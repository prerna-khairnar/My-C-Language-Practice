#include <stdio.h>
#include <string.h>
struct info
{
    int roll;
    char name[10];

    union id
    {
        int adhar;
        int pan;
        int v_c;
    } u;

} i;

int main()
{
    // printf("size of union is : %d",sizeof(u));
    printf("size of structure is : %d\n", sizeof(i));

    i.roll = 22;
    strcpy(i.name, "riya");
    i.u.pan = 12345;

    printf("roll no. is : %d\n", i.roll);
    printf("name is : %s\n", i.name);
    printf(" id is : %d", i.u.v_c);
}