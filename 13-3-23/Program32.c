#include <stdio.h>
static int a = 10; // Only Static and Extern Storage Class can be initialized
int main()
{
    printf("%d", a);
    return 0;
}