#include <stdio.h>

void main()
{
    int num, num1;
    int rev = 0;

    printf("enter 3 digit number :\n");
    scanf("%d", &num);

    while (num != 0)
    {

        num1 = num % 10;       // give the last number
        rev = rev * 10 + num1; // add it to reverse number
        num = num / 10;        // remove the last number
    }

    printf("rever number %d:", rev);
}