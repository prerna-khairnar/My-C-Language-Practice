
// pointer points the constant variable
#include <stdio.h>
int main()
{
    const int a = 99;
    int b = 88;

    const int *ptr = &a;
    printf("%d\n", *ptr);

    // ptr=&a; //invalid to change constant variable

    //*ptr = 345; //can't  change constant variable
}