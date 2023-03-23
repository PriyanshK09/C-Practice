#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int i;
    printf("\n Printing base address of array a:");
    printf("\n%u %u %u %u %u", a, a+1, a+2, a+3, a+4);
    printf("\n Printing elements of array a:");
    printf("\n%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
    printf("\n Printing elements of array a using pointer:");
    for(i=0; i<5; i++)
        printf("\n%d", *(a+i));
    printf("\n %u %u %u", &a[0],a,&a);
    return 0;
}