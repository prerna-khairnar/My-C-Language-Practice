#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array[8];
    FILE *file;
    file = fopen("test.txt", "r");

    if (file == NULL)
    {
        printf("file is not open");
        return 1;
    }

    // int i = 0;
    // while (fscanf(file, "%d", &array[i]) == 1)

    // {
    //     i++;
    //     if (i >= 8)
    //     {
    //         break;
    //     }
    // }

    // printf("array element are : ");
    // for (int j = 0; j < 8; j++)
    // {
    //     printf("%d ", array[j]);
    // }

    for (int i = 0; i < 8; i++)
    {
        fscanf(file, "%d", &array[i]); // read integer
    }

    printf("array element are : ");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", array[i]); // print
    }

    printf("\ndata read successfully");

    fclose(file);
}