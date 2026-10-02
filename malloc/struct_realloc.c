#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int roll;
    char name[10];
};
int main()
{
    struct student *s;
    int n;
    printf("number of student : ");
    scanf("%d", &n);

    s = (struct student *)malloc(n * sizeof(struct student));

    printf("enter %d student information : ", n);
    for (int i = 0; i < n; i++)
    {
        printf("\nenter %d student information : roll no. and name \n", i + 1);
        scanf("%d", &s[i].roll);

        scanf("%s", &s[i].name);
    }

    int new;
    printf("enter additional number of student :");
    scanf("%d", &new);

    s = (struct student *)realloc(s, new * sizeof(struct student));

    printf("enter %d student information : ", new - n);
    for (int i = n; i < new; i++)
    {
        printf("\nenter %d student information : roll no. and name \n", i + 1);
        scanf("%d", &s[i].roll);

        scanf("%s", &s[i].name);
    }

    printf(" %d student information : ", new);
    for (int i = 0; i < new; i++)
    {
        printf("\ninformation of %d student is :\n", i + 1);
        printf("name is : %s\n", s[i].name);
        printf("roll no. is : %d\n", s[i].roll);
    }

    free(s);
}