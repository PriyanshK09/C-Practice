// Pass array elements by element
#include <stdio.h>
void value(int);
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
    printf("Elements by value: ");
    for (i = 0; i < n; i++)
    {
        value(arr[i]);
    }
    return 0;
}
void value(int a)
{
    printf("%d ", a);
}