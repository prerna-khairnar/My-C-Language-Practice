#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "prerana";
    char str2[10] = "khairnar";
    char str3[25];
    printf(" string is : %s,%s\n", str1, str2);

    char *ptr1 = str1;
    char *ptr2 = str2;
    char *ptr3 = str3;

    while (*ptr1 != '\0')
    {
        *ptr3 = *ptr1;
        *ptr1++;
        *ptr3++;
    }
    *ptr3 = ' ';
    *ptr3++;

    while (*ptr2 != '\0')
    {
        *ptr3 = *ptr2;
        *ptr2++;
        *ptr3++;
    }
    *ptr3 = '\0';

    printf("combine string is : %s", str3);
    // printf("combine string is : %s", *ptr3); //null
}