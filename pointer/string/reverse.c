#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = "prerana";
    int length = 0;

    printf("char : %s\n", str);
    while (str[length] != '\0')
    {
        length++;
    }
    printf("length of the string are:%d\n", length);

    char *ptr = str + length - 1;

    printf("reverse string is :");
    while (str <= ptr)
    {
        printf("%c", *ptr);
        *ptr--;
    }
}
