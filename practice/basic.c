#include <stdio.h>

int demo(int *x, int *y)
{

    printf("enter two values : ");
    scanf("%d %d", x, y);
}
int main()
{
    int a, b;

    demo(&a, &b);
    printf("value of a = %d \n value of b = %d", a, b);

    // int i = 0;

    // for (;;)
    // {
    //     printf("i am riya\n");
    //     i++;
    // }

    // while (i < 5)
    // {
    //     printf("i am riya\n");
    //     i++;
    // }
    // for (int i = 0; i < 5; printf("I am here%d\n", i))
    // {

    // }
}