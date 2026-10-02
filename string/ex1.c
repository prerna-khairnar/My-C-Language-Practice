#include <stdio.h>
int main()
{
    char first_name[] = "prerana";
    char middle_name[7] = "sukdev";
    char surname[9];

    printf("enter your surname:");
    scanf("%s", surname); //& used are not necessary only for string
       
    printf("%s", first_name);

    printf(" %s", middle_name);

    printf(" %s", surname);
}