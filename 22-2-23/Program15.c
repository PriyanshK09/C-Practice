// Program to print the Sum of Digit of a Number

#include <stdio.h>
int main()
{
    int n, sum = 0, rem;
    printf("Enter a Number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }

    printf("Sum of Digits: %d", sum);
}