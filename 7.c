#include <stdio.h>
int main()
{
    // input radius
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    // calculate diameter
    float diameter = 2 * radius;
    printf("Diameter = %f", diameter);
    
    // calculate circumference
    float circumference = 2 * 3.14 * radius;
    printf("Circumference = %f", circumference);
    
    // print final asnwer
    printf("The diameter of the circle is %f and the circumference is %f", diameter, circumference);

    return 0;
}