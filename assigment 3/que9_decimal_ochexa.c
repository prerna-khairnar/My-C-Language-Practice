#include <stdio.h>
int main()
{
    int num;
    printf("enter number : ");
    scanf("%d", &num);

    printf("decimal : %d\n", num);

    int binary[32], i = 0;
    if (num == 0)
    {
        printf("Binary: 0\n");
    }
    else
    {
        while (num > 0)
        {
            binary[i] = num % 2; // remainder
            num = num / 2;       // integer division
            i++;
        }

        printf("Binary: ");
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%d", binary[j]);
        }
    }

    printf("\noctal : %o\n", num);
    printf("hexadecimal : %X\n", num);
}