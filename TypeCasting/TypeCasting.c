#include <stdio.h>
int main()
{
    int x = 10, y = 20;
    double z = (double)x / y; // It blindly Type-cast without checking that whether its already done or not.
    printf("%f", z);
    return 0;
}