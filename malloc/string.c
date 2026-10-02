#include <stdio.h>
#include <stdlib.h>

int main()
{
    char st;
    int size;

    printf("enter the size of string : ");
    scanf("%d", &size);

    char *ptr = (char *)malloc((size + 1) * sizeof(char));

    if (ptr == NULL)
    {
        printf("memory allocation is failed");
        return 1;
    }

    printf("enter the string : ");
    scanf("%s", ptr);

    printf("name is %s", ptr);

    free(ptr);
}