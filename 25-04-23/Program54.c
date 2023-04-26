// Multiplication table using Pointer
#include <stdio.h>
int main()
{
    int n, i;
    int *ptr;
    printf("Enter the number: ");
    scanf("%d", &n);
    ptr = &n;
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", *ptr, i, (*ptr) * i);
    }
}