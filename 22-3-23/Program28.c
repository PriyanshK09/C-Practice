#include <stdio.h>
int main()
{
    int roll_no[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Roll No. of 1st student is %d\n", roll_no[0]);
    printf("Traversing the array using for loop : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", roll_no[i]);
    }
    return 0;
}