#include <stdio.h>

int main()
{
    int arr[] = {3, 1, 4, 91, 29, 99, 88, 90, 33};
    int even = 0, odd = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("even is %d\nodd is %d\n", even, odd);
    return 0;
}
