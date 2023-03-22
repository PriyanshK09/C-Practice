// Enter Size of Array: 5
// 10
// 20
// 30
// 41
// 61
// List of even numbers in array: 10 20 30
// Count of even numbers in array: 3

#include <stdio.h>
int main()
{
    int n, i, count = 0;
    printf("Enter Size of Array: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("List of even nos: ");
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d, ", arr[i]);
            count++;
        }
    }
    printf("\nCount: %d", count);
}