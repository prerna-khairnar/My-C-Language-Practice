#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    char name[10];
};

void fun(struct student *stu)
{
    printf("information of student in fun : \n");
    printf("name : %s\n", stu->name);
    printf("roll no. : %d", stu->roll);
}
int main()
{
    struct student s;
    struct student *stu = &s;
    stu->roll = 10;

    strcpy(stu->name, "prerana");

    // printf("name : %s\n", stu->name);
    // printf("roll no. : %d\n", stu->roll);

    // creat one function
    fun(stu);
}
