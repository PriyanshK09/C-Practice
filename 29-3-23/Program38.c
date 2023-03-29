// Deletion of a element from array
#include <stdio.h>
int main()
{
    int arr[100],pos,n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of the element you want to delete: ");
    scanf("%d",&pos);
    for(int i=pos-1;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("The new array is: ");
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}