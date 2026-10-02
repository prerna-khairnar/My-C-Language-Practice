#include <stdio.h>
int main()
{
    char str1[] = "prerana";
    char str2[10];

    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    str2[i] = '\0';

    printf("\n copied string is : %s", str2);
}