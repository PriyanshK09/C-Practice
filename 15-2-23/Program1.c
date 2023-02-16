// Program to calculate the greatest of the 3 input numbers

#include <stdio.h>

int main()
{
    int a;
    printf("Enter A: ");
    scanf("%d", &a);

    int b;
    printf("Enter B: ");
    scanf("%d", &b);

    int c;
    printf("Enter C: ");
    scanf("%d", &c);

    if ( a > b && a > c)
    {
        printf("%d is greater than %d and %d", a, b, c);
    }
    else if ( b > a && b > c)
    {
        printf("%d is greater than %d and %d", b, a, c);
    }
    else if ( c > a && c > b)
    {
        printf("%d is greater than %d and %d", c, a, b);
    }
    else
    {
        printf("All numbers are equal");
    } 
}