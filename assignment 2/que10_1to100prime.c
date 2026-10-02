#include <stdio.h>
int main()
{
    int start, j, end, count;
    printf("enter a start range :");
    scanf("%d", &start);

    printf("enter a end range :");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        if (i < 2)
            continue;

        count = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            printf("%d ", i);
        }
    }
}