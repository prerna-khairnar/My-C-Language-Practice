#include <stdio.h>

int main()
{

    for (int i = 1; i <= 9; i++)
    {
        // print spaces before numbers (right alignment)
        for (int j = i; j < 9; j++)
        {
            printf(" "); // ONE space per column
        }

        // print numbers in each row
        for (int k = 1; k <= i; k++)
        {
            printf("%d", i); // print i without extra space
        }

        printf("\n"); // move to next line
    }

    return 0;
}