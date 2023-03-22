#include <stdio.h>
int main()
{
    int x = 10;
    char y = 'a';
    x = x + y;
    float z = x + 1.0;
    printf("X: %d Y: %c Z: %f", x, y, z);
    return 0;
}