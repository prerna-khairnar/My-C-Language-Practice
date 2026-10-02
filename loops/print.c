#include <stdio.h>
int main()
{
    int start, end;

    printf("enter start number\n");
    scanf("%d", &start);

    printf("enter end number\n");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) // 1=1+2
    {
        printf("%d ", i);
    }
}