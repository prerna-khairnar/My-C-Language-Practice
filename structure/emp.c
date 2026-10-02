#include <stdio.h>
struct emp
{
    int sala;
    char name[10];
};

int main()
{
    struct emp e[4];

    for (int i = 0; i < 4; i++)
    {
        printf(" enter %d employee information\n", i + 1);
        printf("enter salary :");
        scanf("%d", &e[i].sala);
        printf("enter name :");
        scanf("%s", &e[i].name);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("information of %d employee is\n", i + 1);
        printf("name : %s\n", e[i].name);
        printf("salary : %d\n\n", e[i].sala);
    }

    int total = 0;
    for (int i = 0; i < 4; i++)
    {
        total += e[i].sala;
    }

    float avg = total / 4.0;

    printf("total salary of all employee is : %d\n", total);
    printf("avrage of salary is : %2.f", avg);
}