// Program to demonstrate the concept of GOTO Statement

#include <stdio.h>
int main()
{
    int i;
    printf("Enter i: ");
    scanf("%d", &i);
    start:
    printf("%d\n", i);
    i++;
    if(i<=10)
        goto start;
    return 0;
}