#include <stdio.h>
int main()
{
    char str[10] = "prerana";

    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    printf("\n length of string is : %d\n", count);

    int s = 0;
    int e = count - 1;
    while (str[s] > str[e])
    {
        int temp = str[s];
        str[s] = str[e];
        str[e] = temp;
        s++;
        e--;
    }
    printf("reverse string is : %s", str);
}