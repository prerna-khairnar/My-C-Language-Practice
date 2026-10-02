#include <stdio.h>
int a;
void fun();
int main()
{
    fun();               // 1
    fun();               // 2
    fun();               // 3
    register int i = 90; // it is also store garbage value
    // this variable store in CPU register not in memory
    // so yuo cannot access adress of this variable
    printf("%d\n", i); // 90
}
void fun()
{
    static int s = 5;
    s++;
    printf("%d\n", s); // 1
}