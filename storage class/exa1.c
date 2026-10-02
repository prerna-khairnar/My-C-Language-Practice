#include <stdio.h>
void add();
int a = 10; // global declaration
int b = 30;

int main()
{
    // auto var //storage in RAM //scope:within a block
    int i; // local declaration
    {
        int i;
        printf("%d\n", i); // 70 /garbage value
    }

    printf("%d\n", i); // 90
    printf("%d\n", a); // 10 /store 0

    add();
}
void add()
{
    int c;
    c = a + b;
    printf("addition is  : %d", c); // 40
}

// if variable not initialized
// auto variable store the garbage value
// global varible store 0