#include <stdio.h>
int main()
{

    int a = 10;
    // int *ptr = &a; //allocate
    int *ptr = 0; // not allocate
    if (ptr == NULL)
    {
        printf("memory not allocated");
    }
    else
    {
        printf("memory allocated successfully");
    }
}