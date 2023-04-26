// NULL Pointer
// A pointer that is not assigned any value but NULL is known as NULL pointer. If we don't have any address to be assigned to a pointer then we can simply use NULL.

#include <stdio.h>
int main()
{
    int a = 8;
    int *p = NULL;
    printf("%u\n", p);
    printf("%d\n", *p);
    p=&a;
    return 0;
}