#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // char data[50] = "khairnar";
    FILE *file;
    file = fopen("test.txt", "w");

    if (file == NULL)
    {
        printf("memory allocation failed");
    }

    // fprintf(file, "%s", data);
    fprintf(file, "%s", "prerana khairnar");

    printf("file is created");

    fclose(file);
}