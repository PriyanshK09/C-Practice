#include <stdio.h>
int main()
{
    int a = 5;
    int b = 10;
    int * const p = &a;
    *p = 10;
    printf("%d\n", p);
}