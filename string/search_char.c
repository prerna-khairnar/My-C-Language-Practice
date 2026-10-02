#include <stdio.h>

int main()
{
    char str[50];
    char ch;
    int found = 0;

    printf("Enter a string: ");
    gets(str); // or use fgets(str, sizeof(str), stdin);

    printf("Enter the character to search: ");
    scanf("%c", &ch);

    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            found = 1;
            printf("Character '%c' found at position %d\n", ch, i + 1);
        }
        i++;
    }

    if (!found)
        printf("Character '%c' not found in the string.\n", ch);

    return 0;
}
