#include <stdio.h>
int main()
{
    int math;
    int eng;
    int mara;
    int total;
    total = math + eng + mara;

    printf("\nenter subject marks :");
    printf("\nenter your math subject marks :");
    scanf("%d", &math);

    printf("\nenter your  english marks :");
    scanf("%d", &eng);

    printf("\nenter your marathi subject marks :");
    scanf("%d", &mara);

    if (250 <= total)
    {
        printf("you passed");
    }
    else
    {
        printf("yuo failed");
    }
}