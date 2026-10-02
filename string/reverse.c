#include <stdio.h>
int main()
{
    char str[10] = "prerana";

    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    printf("\n length of string is : %d\n", count);

    i = count;
    while (i >= 0)
    {
        printf("%c", str[i]);
        i--;
    }
}