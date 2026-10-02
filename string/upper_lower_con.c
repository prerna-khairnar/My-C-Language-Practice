#include <stdio.h>
int main()
{
    // lowe to upper case
    char str[10] = "riyooo";

    int i = 0;
    while (str[i] != '\0')
    {
        str[i] = str[i] - 32;
        i++;
    }
    printf("string after conversion :%s\n", str);

    // upper to lower case
    char str1[10] = "KHAIRNAR";

    int j = 0;
    while (str1[j] != '\0')
    {
        str1[j] = str1[j] + 32;
        j++;
    }
    printf("string after conversion :%s", str1);
}
