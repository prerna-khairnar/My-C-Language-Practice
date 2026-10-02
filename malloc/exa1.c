#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s;
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 90;
    printf("%d", *ptr);
}