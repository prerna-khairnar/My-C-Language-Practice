#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "khairnar";
    char str2[10] = "khairn";

    char *ptr1 = str1;
    char *ptr2 = str2;

    int f = 0;

    while (*ptr1 != '\0')
    {
        if (*ptr1 != *ptr2)
        {
            f = 1;
            break;
        }
        *ptr1++;
        *ptr2++;
    }

    if (f == 0)
    {
        printf("both string are equal");
    }
    else
    {
        printf("both string are not equal");
    }
}
