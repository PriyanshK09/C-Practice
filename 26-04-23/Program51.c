// Pointer :- A pointer is a variable that contains the address of another variable.
#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("The value of a is %d\n", a);
    printf("The value of p is %d\n", *p);

    // Printing memory address of pointer
    printf("The address of a is %u\n", &a);
    printf("The address of p with &* is %u\n", &*p);
    printf("The address of p but with *& is %u\n", *&p);
}