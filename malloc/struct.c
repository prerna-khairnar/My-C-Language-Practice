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
    // struct student *s = (struct student *)malloc(sizeof(struct student));
    struct student *s = (struct student *)calloc(1, sizeof(struct student));
    s->roll = 10;
    strcpy(s->name, "riyoo");

    if (s == NULL)
    {
        printf("failed to assign memory");
    }
    else
    {
        printf("succesfully assign");
    }

    printf("roll no. is: %d\n", s->roll);
    printf("name is : %s", s->name);

    free(s);
}
