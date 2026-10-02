#include <stdio.h>
int main()
{
    char str[] = "riya@123 sukdev khairnar";

    int cons = 0;
    int vow = 0;

    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vow++;
        }

        else
        {
            cons++;
        }

        i++;
    }
    printf("number of vowels are %d\n", vow);
    printf("number of consonent are %d\n", cons);
}
