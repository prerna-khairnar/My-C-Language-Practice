#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char data[50] = "khairnar";
    char a[50];
    FILE *file;
    file = fopen("test.txt", "r");

    if (file == NULL)
    {
        printf("file not open");
    }

    // fprintf(file, "%s", data); //write

    // for reading store the data to buffer
    while (fgets(a, sizeof(a), file) != NULL) // read
    {
        printf("%s", a);
    }

    printf("\ndata read successfully");

    fclose(file);
}