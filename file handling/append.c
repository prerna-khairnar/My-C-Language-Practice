#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int s = 100;
    FILE *file;
    file = fopen("test.txt", "a");

    if (file == NULL)
    {
        printf("memory allocation failed");
    }

    fprintf(file, "%d", s);

    printf("file is created");

    fclose(file);
}