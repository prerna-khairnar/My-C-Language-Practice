#include <stdio.h>
#define size 90

int main()
{
#undef size // delete size

    // #ifndef // size not define
#ifdef size // function for check size are define or not
    {
        printf("size is define");
    }
#else
    {
        printf("size is not define");
    }
#endif
}