#include <stdio.h>
int main()
{
    char str[] = "riya@123 sukdev khairnar";

    int alpha = 0;
    int num = 0;
    int s_char = 0;
    int space = 0;

    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            num++;
        }

        else if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            alpha++;
        }
        else
        {

            s_char++;
        }

        if (str[i] == ' ')
        {
            space++;
        }
        i++;
    }
    printf("number of alphabet are %d\n", alpha);
    printf("number of integer are %d\n", num);
    printf("number of special character are %d\n", s_char);
    printf("number of space are %d\n", space + 1);
}
