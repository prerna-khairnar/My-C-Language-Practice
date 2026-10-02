#include <stdio.h>
#include <string.h>

// int main()
// {
//     char str1[10] = "prerana";
//     char str2[20];
//     int length = 0;

//     while (str1[length] != '\0')
//     {
//         length++;
//     }
//     printf("length of the string are:%d\n", length);

//     printf("original string : %s\n", str1);

//     char *ptr1 = str1;
//     char *ptr2 = str2;

//     while (*ptr1 != '\0')
//     {
//         *ptr2 = *ptr1;
//         *ptr1++;
//         *ptr2++;
//     }
//     *ptr2 = '\0';

//     printf("copied string : %s\n", str2);

//     char *ptr3 = str1 + length - 1;

//     printf("reverse string is :");
//     while (ptr3 >= str1)
//     {
//         printf("%c", *ptr3);
//         *ptr3--;
//     }

//     ptr1 = str1;
//     ptr3 = str1 + length - 1;
//     int flag = 0;
//     while (ptr1 < ptr3)
//     {
//         if (*ptr1 != *ptr3)
//         {
//             flag = 1;
//             break;
//         }
//         ptr1++;
//         ptr3--;
//     }

//     if (flag == 0)
//     {
//         printf("\nString is palindrome");
//     }
//     else
//     {
//         printf("\nString is not palindrome");
//     }
// }

int fun(char *str)
{
    char *start = str;
    char *end = str + strlen(str) - 1;
    while (start < end)
    {
        if (*start != *end)
        {
            return 0;
        }
        start++;
        end--;
    }
}

int main()
{
    char str[10];
    printf("enter a string :");
    scanf("%s", str);

    int s = fun(str);

    if (s == 0)
    {
        printf("\nString is not palindrome");
    }
    else
    {
        printf("\nString is palindrome");
    }
}