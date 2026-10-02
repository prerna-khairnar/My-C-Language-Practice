#include <stdio.h>
// int main()
// {
//     int a = 10;
//     int b = 20, temp;

//     printf("before swapping : ");
//     printf("a : %d , b : %d", a, b);

//     temp = a;
//     a = b;
//     b = temp;

//     printf("\nafter swapping : ");
//     printf("a : %d , b : %d", a, b);
// }

int main()
{
    int a = 5, b = 10;

    printf("before swapping : ");
    printf("a : %d , b : %d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nafter swapping : ");
    printf("a : %d , b : %d", a, b);
}