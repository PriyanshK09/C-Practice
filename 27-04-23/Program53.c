#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int *ptr = arr;
    int i;
    for (i = 0; i < 7; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\nAddresses are : \n");
    for (i = 0; i < 7; i++)
    {
        printf("%d ", &ptr+i);
    }
}