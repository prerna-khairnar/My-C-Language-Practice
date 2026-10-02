#include <stdio.h>
int main()
{
    int day;
    printf("1:monday\n2:tuesday\n3:wednesday\n4:thursday\n5:friday\n6:saturday\n7:sunday");
    printf("enter a day:");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("monday\n");
        break;
    case 2:
        printf("tuesday\n");
        break;
    case 3:
        printf("wednesday\n");
        break;
    case 4:
        printf("thursday\n");
        break;
    case 5:
        printf("friday\n");
        break;
    case 6:
        printf("saturday\n");
        break;
    case 7:
        printf("sunday\n");
        break;
    default:
        printf("enter a valid number between 1 to 7!!!");
    }
}