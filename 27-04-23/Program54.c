// WAP to read and display elements of 1D array using pointer to array.
#include <stdio.h>
int main()
{
    int i, n;
    int a[10];
    int *ptr = a;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", ptr+i);
    }
    printf("The elements are: \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", *(ptr+i));
    }
}