#include <stdio.h>
int main()
{
    char str[20] = "ri yo oo";
    char str1[20];

    int i = 0;
    int j = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            str1[j] = str[i];
            j++;
        }
        i++;
    }
    str1[j] = '\0';
    printf("string after removing space : %s", str1);
}