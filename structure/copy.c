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
    struct info i1 = {13, "techno", "pune"};

    // update the struct member
    i1.roll_no = 99;

    i2 = i1; // copy from i1 to i2

    printf("3rd stdudent informtion :\n");
    printf("roll number : %d\n", i2.roll_no);
    printf("roll name : %s\n", i2.name);
    printf("roll add : %s\n\n", i2.add);
}
