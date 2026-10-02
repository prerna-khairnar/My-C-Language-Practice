#include <stdio.h>
#include <string.h>
struct student
{
    int rollno;
    char name[10];
    int mark;
};
int main()
{
    struct student s[3];

    for (int i = 0; i < 3; i++)
    {
        printf("enter the roll no. of %d student :", i + 1);
        scanf("%d", &s[i].rollno);
        printf("enter the name of %d student :", i + 1);
        scanf("%s", &s[i].name);
        printf("enter the mark of %d student :", i + 1);
        scanf("%d", &s[i].mark);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n\nroll no. of %d student is : %d", i + 1, s[i].rollno);
        printf("\nname of %d student is : %s", i + 1, s[i].name);
        printf("\nmarks of %d student is : %d\n\n", i + 1, s[i].mark);
    }

    char search[10];
    printf("enter student name you want to search info: ");
    scanf("%s", search);

    for (int i = 0; i < 3; i++)
    {

        if (strcmp(s[i].name, search) == 0)
        {
            printf("\nsearch student info");
            printf("\nroll no. of %d student is : %d", i + 1, s[i].rollno);
            printf("\nname of %d student is : %s", i + 1, s[i].name);
            printf("\nmarks of %d student is : %d\n", i + 1, s[i].mark);
        }
    }
}
