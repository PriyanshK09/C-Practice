// Linear Search of Array logic
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of array: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    int key;
    printf("Enter the key to search: ");
    scanf("%d", &key);
    for(i=0; i<n; i++)
    {
        if(a[i] == key)
        {
            printf("Key found at index %d", i);
            break;
        }
    }
    if(i == n)
        printf("Key not found");
    return 0;
}