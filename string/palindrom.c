#include <stdio.h>
int main()
{
    char str1[] = "riuy";
    char str2[10];

    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    printf("\nCopied string is : %s", str2);

    int count = 0;
    while (str1[count] != '\0')
    {
        count++;
    }
    printf("\nLength of string is : %d\n", count);

    int s = 0;
    int e = count - 1;
    while (s < e)
    {
        int temp = str1[s];
        str1[s] = str1[e];
        str1[e] = temp;
        s++;
        e--;
    }
    printf("Reverse string is : %s\n", str1);

    int flag = 0;
    int k = 0;
    while (str1[k] != '\0')
    {
        if (str1[k] != str2[k])
        {
            flag = 1;
            break;
        }
        k++;
    }

    if (flag == 0)
    {
        printf("String is palindrome");
    }
    else
    {
        printf("String is not palindrome");
    }
}
