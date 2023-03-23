// Program to take 10 numbers as input from user and then find the sum of all the numbers. (Use arrays)

#include <stdio.h>
int main()
{
    int i, sum = 0, num[10];
    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }
    printf("Sum = %d", sum);
    return 0;
}