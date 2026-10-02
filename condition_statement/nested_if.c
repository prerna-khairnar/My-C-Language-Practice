#include <stdio.h>
int main()
{
    int age;
    printf("enter your age :");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("eligible for voting \n");
        if (age < 60)
        {
            printf("young\n");
        }
        else
        {
            printf("elder\n");
        }
    }
    else
    {
        printf("not eligible for voting\n");
        if (age < 13)
        {
            printf("child\n");
        }
        else
        {
            printf("teenage");
        }
    }
}