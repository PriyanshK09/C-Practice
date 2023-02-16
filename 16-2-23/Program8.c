// Program to create a Calculator using switch case
#include <stdio.h>
int main()
{
    int choice,a,b;
    printf("Enter your choice between 1-4: \n");
    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for division\n");
    printf("Press 4 for multiplication\n");
    scanf("%d", &choice);

    printf("Enter two numbers: \n");
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);

    switch (choice)
    {
    case 1:
        printf("(A+B) = (%d+%d) = %d", a, b, a + b);
        break;
    case 2:
        printf("(A-B) = (%d-%d) = %d", a, b, a - b);
        break;
    case 3:
        printf("(A/B) = (%d/%d) = %d", a, b, a / b);
        break;
    case 4:
        printf("(A*B) = (%d*%d) = %d", a, b, a * b);
        break;
    default:
        printf("Invalid input");
        break;
    }
}