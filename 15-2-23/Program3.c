// Switch Method in C

#include <stdio.h>
int main()
{
    int day;
    printf("Enter a number of day between 0 to 6 = ");
    scanf("%d", &day);
    switch (day)
    {
    case 0:
        printf("Sunday");
        break;
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Sarurday");
        break;
    default:
        printf("Enter valid number!");
        break;
    }
}
