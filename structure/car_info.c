#include <stdio.h>
#include <string.h>
struct info
{
    char brand[20];
    char model[10];
    int year;
    int price;
} i1;

int main()
{
    printf("enter car details");
    printf("enter car brand:");
    scanf("%s", &i1.brand);
    printf("enter car model:");
    scanf("%s", &i1.model);
    printf("enter car year:");
    scanf("%d", &i1.year);
    printf("enter car brand:");
    scanf("%d", &i1.price);

    printf("car details");
    printf("brand : %s\n", i1.brand);
    printf("model : %s\n", i1.model);
    printf("year : %d\n", i1.year);
    printf("price : %d", i1.price);
}