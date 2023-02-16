#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age of the person: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Yes, he/she is eligible!");
    }
    else
    {
        printf("Grow up kid!");
    }
}