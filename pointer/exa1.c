#include <stdio.h>
int main()

{
    int a = 10;
    int *ptr = &a;
    printf("A is : %d\n", a);
    printf("ptr is : %d\n", *ptr);
    printf("adress of a  is : %d\n", ptr);
    printf("ptr stored is : %d\n", ptr);
    printf("ptr stored is : %d\n", *&a);
}
