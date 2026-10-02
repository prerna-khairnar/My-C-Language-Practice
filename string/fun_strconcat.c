#include <stdio.h>
int main()
{
    char str1[20] = "prerana";
    char str2[10] = "khairnar";

    printf("string before concat : %s\n%s\n", str1, str2);

    int i = 0;

    while (str1[i] != '\0')
    {
        i++;
    }

    int j = 0;
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    printf("string after concat : %s", str1);
}