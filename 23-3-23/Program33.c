// Program to take an input for 2D array and print it
#include <stdio.h>
int main()
{
    int a[3][3], i, j;
    printf("Enter the elements of the array : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The elements of the array 1 are : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Taking other Matrix
    int b[3][3];
    printf("Enter the elements of the array : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The elements of the array 2 are : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // Sum of the two matrices
    int sum[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Sum : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Multiplying the two matrices
    int c[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Multiplication : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}