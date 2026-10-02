#include <stdio.h>

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("\nEnter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    int visited[size];
    for (int i = 0; i < size; i++)
    {
        visited[i] = 0; // mark all as not counted yet
    }

    printf("\n\nFrequency of each element:\n");
    for (int i = 0; i < size; i++)
    {
        if (visited[i] == 1)
            continue; // skip if already counted

        int count = 1; // start counting current element
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1; // mark duplicate as counted
            }
        }

        printf("%d is found %d times\n", arr[i], count);
    }

    return 0;
}
