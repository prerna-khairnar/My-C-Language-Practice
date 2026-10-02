#include <stdio.h>
#include <string.h>
typedef struct st
{
    int id;
    char name[10];
} student;

int main()
{
    student stu;

    stu.id = 10;
    strcpy(stu.name, "riya");
    printf("roll no. is : %d\n", stu.id);
    printf("name is : %s", stu.name);
}