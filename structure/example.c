#include <stdio.h>
struct demo
{
    int x, y, z;
};
int main()
{
    struct demo d = {.y = 0, .x = 78, .z = 23};
    printf("%d%d%d", d.x, d.y, d.z);
}