#include <stdio.h>
void fun();
int i;
int main()
{
    int s;
    printf("%d\n", s); // garbage value
    printf("%d\n", i); // store 0 //global variable

    fun();
    fun();
}
void fun()
{
    int a = 0;
    a++;
    printf("%d\n", a);
}