// Area and Perimeter of Circle
#include <stdio.h>
int main()
{
    float radius, area, perimeter;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    perimeter = 2 * 3.14 * radius;
    printf("Area of the circle = %f\n", area);
    printf("Perimeter of the circle = %f\n", perimeter);
}