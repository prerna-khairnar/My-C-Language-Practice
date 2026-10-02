#include <stdio.h>
#include <string.h>
struct emp
{
    int sal;
    char name[10];
};
struct emp fun();

int main()
{
    struct emp e = fun(e);

    printf("salary is : %d", e.sal);
    printf("\nname is : %s", e.name);

    // struct emp e = {50000, "riyoo"};
    // fun(e);
}

struct emp fun() // struct emp e
{
    struct emp e = {50000, "riyoo"};
    e.sal = 30000; // update
    return e;

    // printf("salary is : %d", e.sal);
    // printf("\nname is : %s", e.name);
}