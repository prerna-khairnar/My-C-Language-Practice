#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = "prerana";

    char *ptr = str;

    printf("%s\n", ptr);
    printf("%s\n", str);
    // printf("%c\n", str);

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        *ptr++;
    }
}