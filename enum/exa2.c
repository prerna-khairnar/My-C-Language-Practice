#include <stdio.h>

enum level
{
    low,
    high123 = 99,
    medium = 9,
    high,
};

int main()
{
    enum level myVar = medium;

    switch (myVar)
    {
    case low:
        printf("low level");
        break;

    case medium:
        printf("medium level");
        break;

    case high:
        printf("high level");
        break;

    case high123:
        printf("high123 level");
        break;
    }
    return 0;
}
