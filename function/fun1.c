
#include <stdio.h>

// fun declaration
void sum();             // no return type-no arguement
void sub(int a, int b); // no return type with arguement

void sum() // fun defination
{
    int a = 90;
    int b = 56;
    int c = a + b;
    printf("addition is %d:\n", c);
}

int main()
{
    sum(); // fun call
    sum(); // you can call the function multiple time

    int a = 50;
    int b = 10;
    sub(a, b);
    sub(40, 20);
}

void sub(int a, int b)
{
    int c = a - b;
    printf("substraction is %d:\n", c);
}