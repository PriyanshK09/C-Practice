// WAP to find the Sum and Mean of 1D array elements using pointer to array.
#include <stdio.h>
int main()
{
    int i, n, sum, mean;
    int a[10];
    int *ptr = a;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", ptr+i);
    }
    printf("Display elements: \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", *(ptr+i));
    }
    for ( i = 0; i < n; i++)
    {
        sum += *(ptr+i);
    }
    mean = sum/n;
    printf("\nThe sum of the elements is: %d", sum);
    printf("\nThe mean of the elements is: %d", mean);
}
