#include <stdio.h>
#include <string.h>
struct info
{
    int roll_no;
    char name[10];
    char add[15];
} i1, i2;

int main()
{
    struct info i3 = {13, "techno", "pune"}; // initialize struct using initializer list
    // struct info i3 = {.roll_no=13, .name="techno", .add="pune"};
    struct info i4 = {.roll_no = 10, .name = "prerana", .add = "dhule"};

    // initialize using assignment operator
    i1.roll_no = 99;
    strcpy(i1.name, "embedded"); // i1.name="techno"; is not valid in c
    strcpy(i1.add, "mumbai");

    printf("enter 3rd studend information\n");
    printf("roll number :");
    scanf("%d", &i2.roll_no);
    printf("name :");
    scanf("%s", &i2.name);
    printf(" add : ");
    scanf("%s", &i2.add);

    printf("1st stdudent informtion :\n");
    printf("roll number : %d\n", i1.roll_no);
    printf("roll name : %s\n", i1.name);
    printf("roll add : %s\n\n", i1.add);

    printf("2nd stdudent informtion :\n");
    printf("roll number : %d\n", i3.roll_no);
    printf("roll name : %s\n", i3.name);
    printf("roll add : %s\n\n", i3.add);

    printf("3rd stdudent informtion :\n");
    printf("roll number : %d\n", i2.roll_no);
    printf("roll name : %s\n", i2.name);
    printf("roll add : %s\n\n", i2.add);

    printf("4rd stdudent informtion :\n");
    printf("roll number : %d\n", i4.roll_no);
    printf("roll name : %s\n", i4.name);
    printf("roll add : %s\n", i4.add);
}
