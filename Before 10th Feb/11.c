// write a program to check whether number is divisible by 5 or not
#include <stdio.h>
int main()
{
    int num1;
    printf("Enter the number to check: ");
    scanf("%d",&num1);

    (num1%5==0)?printf("Yes, Divisible"):printf("Not Divisble");
}