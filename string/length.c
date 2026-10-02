#include <stdio.h>
int main()
{

    // string length without using function
    
    int count = 0;
    char str[] = "prerana";

    int i = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    printf("length of the string are:%d", count);
}