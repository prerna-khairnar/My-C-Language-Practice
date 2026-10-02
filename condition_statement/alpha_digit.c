#include <stdio.h>
int main()
{
    char a;

    printf("enter something :");
    scanf(" %c", &a);

    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        printf("alphabet\n");
    }
    else if (a >= '0' && a <= '9')
    {
        printf("digit\n");
    }
    else
    {
        printf("speacial characte");
    }
}