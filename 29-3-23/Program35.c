// Pass entire array
#include <stdio.h>
void reference(int [], int );
void sum(int [], int );
int main()
{
    int arr[100], i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Elements by reference: ");
    reference(arr, n);
    sum(arr, n);
    return 0;
}
void reference(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

// Sum of all elements of an array

void sum(int arr[], int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("\nSum of all elements: %d", sum);
}