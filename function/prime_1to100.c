#include <stdio.h>

void prime(int start, int end)
{

    // print prime number 1to 100

    if (start > end)
    {
        return;
    }
    int count = 0;
    for (int j = 2; j <= start / 2; j++)
    {
        if (start % j == 0)
        {
            count++;
            break;
        }
    }

    if (count == 0)
    {
        printf("%d ", start);
    }
    prime(start + 1, end);
}

int main()
{
    int start, end;
    printf("enter the start range:");
    scanf("%d", &start);

    printf("enter the end range:");
    scanf("%d", &end);

    printf("Prime numbers from %d to %d are:\n", start, end);
    prime(start, end);
}
