#include <stdio.h>
union id
{
    double d;
    int adhar;
    int pan;
    int voting;
};
int main()
{
    union id u;
    printf("size of union is : %d\n", sizeof(u));

    u.pan = 1234;
    u.voting = 9876; // value update/override // both value are same
    printf("pan no. is : %d\n", u.pan);
    printf("voting no. is : %d", u.voting);

    // voting are not initialize but still it can access this member also because their is
    // only one memory location ( and all members can share/use the same memory location)
}