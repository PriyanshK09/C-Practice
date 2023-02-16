#include <stdio.h>
int main()
{
    int a,b;
    float c,d;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Enter two floating point numbers: ");
    scanf("%f %f", &c, &d);

    printf("%d %d\n", a+b, a*b);
    printf("%.2f %.2f", c+d, c-d);
}