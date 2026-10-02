#include <stdio.h>
int main()
{
    char str1[10];
    char str2[20];

    printf("enter 1st string :");
    scanf("%s", &str1);

    printf("enter 2nd string :");
    scanf("%s", &str2);

    int i = 0;
    int flag = 0;
    while (str1[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            flag = 1;
            // break;
        }
        i++;
    }

    if (flag == 0)
    {
        printf("both string are equal");
    }
    else
    {
        printf("both string are not equal");
    }
}
