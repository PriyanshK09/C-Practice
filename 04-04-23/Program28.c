#include <stdio.h>
int main()
{
    int a = 5643;
    printf("%d \n", a);
    printf("* %d \n", a);
    printf("** %d \n", a);
    printf("** %d **\n", a);
    printf("*%6d*\n", a); 
    printf("*%06d*\n", a);
    // Why is -6d used above?
    // -6d means left justify the number in a field of 6 characters
    // and pad with spaces on the right.
    // The default is to right justify the number in a field of 6 characters
}                      