#include <stdio.h>
int main()
{
    int choice;
    printf("1. convert hh:mm:ss to second\n");
    printf("2. convert total second to hh:mm:ss\n");
    printf("enter choice : ");
    scanf("%d", &choice);

    printf(" choice is : %d\n", choice);

    if (choice == 1)
    {
        int h, m, s, totalsec;

        printf("enter hour minute and second : ");
        scanf("%d%d%d", &h, &m, &s);

        totalsec = h * 3600 + m * 60 + s;

        printf("total second : %d\n", totalsec);
    }
    else if (choice == 2)
    {
        int sec, h, s, m;

        printf("enter total second : ");
        scanf("%d", &sec);

        h = sec / 3600;
        sec %= 3600;
        m = sec / 60;
        s = sec / 60;

        printf("Time = %d:%d:%d\n", h, m, s);
    }
    else
    {
        printf("Invalid choice\n");
    }
}