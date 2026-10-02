#include <stdio.h>
struct student
{
    char name[10];
    int marks[5];
    int rollno;
    int total;
    float per;
};
int main()
{

    struct student s[2];
    char subjects[5][20] = {"Java", "Cloud Computing", "Deep Learning", "RMT", "VLSI"};

    for (int i = 0; i < 2; i++)
    {
        s[i].total = 0;
        s[i].per = 0;

        printf("enter the information of %d student :\n", i + 1);
        printf("enter roll no :");
        scanf("%d", &s[i].rollno);
        printf("enter the name of:");
        scanf("%s", &s[i].name);

        printf("enter the marks of %d student :\n", i + 1);
        for (int j = 0; j < 5; j++)
        {

            printf("%s: ", subjects[j]);
            scanf("%d", &s[i].marks[j]);

            s[i].total += s[i].marks[j];
        }

        s[i].per = (float)s[i].total / 5.0;
    }

    for (int i = 0; i < 2; i++)
    {
        printf("\ninformation of %d student\n", i + 1);
        printf("roll no. : %d\n", s[i].rollno);
        printf("name :%s\n", s[i].name);

        for (int j = 0; j < 5; j++)
        {

            printf("%s : %d\n", subjects[j], s[i].marks[j]);
        }

        printf("total marks of %d student is : %d\n", i + 1, s[i].total);
        printf("percentage of %d student is : %2.f\n", i + 1, s[i].per);
    }
}