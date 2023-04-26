#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int i;
    int *p;
    p = arr;
    printf("First element: %d\n", *p); // 10
    p = p + 1;
    printf("Second element: %d\n", *p); // 20
    p = p + 1;
    printf("Third element: %d\n", *p); // 30

    *p = 45;
    p = p + 2
    *p = -2
    printf("New array is \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}