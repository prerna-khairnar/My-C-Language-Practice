#include <stdio.h>
int a = 10;
void fun(); // global declaration
int main()
{

    static int i = 90; // local declaration

    printf("%d\n", i); // 90
    // i++;
    //  i = 45;
    // printf("%d\n", i); // 45
    fun(); // 1
    fun(); // 2
    fun(); // 3
}

void fun()
{
    // static varible are noot delete after the end of block of code
    static int i = 0;
    i++;
    printf("%d\n", i);
}