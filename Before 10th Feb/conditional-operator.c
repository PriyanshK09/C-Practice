#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age of the person: ");
    scanf("%d",&age);
    (age>=18)?printf("Yes, he/she is eligible!"):printf("Grow up kid!");
}