#include <stdio.h>
int main()
{
    int a[100];
    int hold, i, j, n;
    printf("\n Enter value of n: ")
    scanf("%d", &n);
    printf("\n Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n The original array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]); // Elements will come with spaces
    }

    // Bubble Sort
    // Loop to control number of passes are always n-1

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
    }
    printf("\n The sorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;

}