#include <stdio.h>
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        printf("i am learning c programming language\n\n");
    }

    int a = 1;
    for (; a <= 5;)
    {
        printf("i am interested in embedded system\n");
        a++;
    }

    // infinity loop syntax
    int b = 1;
    for (;;)
    {
        printf("hello\n");
        b++;
    }
}