#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    FILE *file;
    file = fopen("test.txt", "w");

    if (file == NULL)
    {
        printf("memory not allocated");
    }

    // fprintf(file, "%s", "array element are :");
    for (int i = 0; i < 8; i++)
    {
        fprintf(file, "%d ", array[i]);
    }

    printf("\ndata write successfully");

    fclose(file);
}