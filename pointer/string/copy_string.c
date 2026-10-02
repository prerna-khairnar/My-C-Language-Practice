#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "khairnar";
    char str2[15];
    printf("original string : %s\n", str1);

    char *ptr1 = str1;
    char *ptr2 = str2;

    while (*ptr1 != '\0')
    {
        *ptr2 = *ptr1;
        *ptr1++;
        *ptr2++;
    }
    *ptr2 = '\0';

    printf("copied string : %s\n", str2);
    // printf("copied string : %s\n", *ptr2); //null //because is already goes to the null variable
    // printf("copied string : %s\n", ptr2);
}