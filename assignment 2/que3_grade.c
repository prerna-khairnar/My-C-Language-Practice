#include <stdio.h>
int main()
{
    int js, cc, vlsi, rmt, dl, total;
    float per;

    printf("enter javascript subject marks:");
    scanf("%d", &js);

    printf("enter cloud computing subject marks:");
    scanf("%d", &cc);

    printf("enter vlsi subject marks:");
    scanf("%d", &vlsi);

    printf("enter rmt subject marks:");
    scanf("%d", &rmt);

    printf("enter deep learning subject marks:");
    scanf("%d", &dl);

    total = js + cc + vlsi + rmt + dl;
    printf("\ntotal marks obtained are:%d", total);

    per = (total / 500.0) * 100;
    printf("\npercentage are:%.2f\n", per);

    if (per >= 90)
    {
        printf("grade A");
    }
    else if (per >= 80)
    {
        printf("grade B");
    }
    else if (per >= 65)
    {
        printf("grade C");
    }
    else
    {
        printf("failed");
    }
}