#include <stdio.h>

void main()
{
    char ch;

    printf("enter a vowel:");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("vowel");
    }
    else
    {
        printf("consonent");
    }
}