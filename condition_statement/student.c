#include <stdio.h>
int main()
{
    int marks, attendance;

    printf("enter student marks :");
    scanf("%d", &marks);

    printf("enter student attendance :");
    scanf("%d", &attendance);

    if (marks >= 80 && attendance >= 90)
    {
        printf("student is eligible for scholarship");
    }
    else
    {
        printf("not eligible");
    }
}