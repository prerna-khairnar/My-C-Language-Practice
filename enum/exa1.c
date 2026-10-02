#include <stdio.h>
enum level
{
    low,
    high123 = 99,
    medium = 9,
    high,

};
int main()
{
    // high=80; // not valid it is read only variable
    // cannot change this after init

    printf("low value is : %d\n", low);
    printf("high value is : %d\n", high);
    printf("medium value is : %d\n", medium);
    printf("second high value is : %d\n", high123);
}