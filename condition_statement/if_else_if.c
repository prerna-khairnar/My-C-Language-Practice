#include <stdio.h>
int main()
{
    int marks;

    printf("enter your marks :");
    scanf("%d", &marks);

    if (marks >= 65)
    {
        printf(" you got A grade");
    }
    else if (marks >= 45)
    {
        printf(" you got B grade");
    }
    else if (marks >= 35)
    {
        printf(" you got C grade");
    }
    else
    {
        printf("you failed");
    }
}