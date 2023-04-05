#include <stdio.h>
int main()
{
    struct KOCCK
    {
        int roll_number;
        int reg_number;
        float cgpa;
    };
    printf("Size of structure KOCCK is %d", sizeof(struct KOCCK));
}