// Program to create a Calculator using switch case
#include <stdio.h>
int main()
{
    char choice;
    int a,b;
    printf("Enter your choice between 1-4: \n");
    printf("Press + for addition\n");
    printf("Press - for subtraction\n");
    printf("Press / for division\n");
    printf("Press * for multiplication\n");
    scanf("%c", &choice);

    printf("Enter two numbers: \n");
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);

    switch (choice)
    {
    case '+':
        printf("(A+B) = (%d+%d) = %d", a, b, a + b);
        break;
    case '-':
        printf("(A-B) = (%d-%d) = %d", a, b, a - b);
        break;
    case '/':
        printf("(A/B) = (%d/%d) = %d", a, b, a / b);
        break;
    case '*':
        printf("(A*B) = (%d*%d) = %d", a, b, a * b);
        break;
    default:
        printf("Invalid input");
        break;
    }
}