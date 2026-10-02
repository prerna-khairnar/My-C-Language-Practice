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
    struct student s[3] = {
        {10, "chetss", 99},
        {20, "rajji", 98},
        {22, "shrau", 91}};

    for (int i = 0; i < 3; i++)
    {
        printf("\n\nroll no. of %d student is : %d", i + 1, s[i].rollno);
        printf("\nname of %d student is : %s", i + 1, s[i].name);
        printf("\nmarks of %d student is : %d\n", i + 1, s[i].mark);
    }
}
