// Binary Search in Array
#include <stdio.h>
int main()
{
    int a[10], i, n, item, beg, end, mid, loc;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the item to be searched: ");
    scanf("%d", &item);
    beg = 0;
    end = n - 1;
    loc = -1;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (item == a[mid])
        {
            loc = mid;
            break;
        }
        else if (item < a[mid])
            end = mid - 1;
        else
            beg = mid + 1;
    }
    if (loc == -1)
        printf("Item not found");
    else
        printf("Item found at location %d", loc + 1);
    return 0;
}