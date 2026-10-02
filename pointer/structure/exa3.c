#include <stdio.h>
struct emp
{
    char name[10];
    int id;
    int salary;
};

void info(struct emp *em)
{
    // struct emp e;
    // struct emp *em=&e;

    printf("enter the employee name :");
    scanf("%s\n", &em->name);
    printf("enter the employee id :");
    scanf("%d\n", &em->id);
    printf("enter the employee salary :");
    scanf("%d\n", &em->salary);
}
int main()
{
    struct emp e;
    struct emp *em = &e;
    info(em);

    printf("employee information is :\n");
    printf("name is :%s", em->name);
    printf("id is : %d", em->id);
    printf("salary is : %d", em->salary);
}