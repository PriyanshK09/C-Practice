#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
            continue;
        printf("%d ", i);
        i++;
    }
    return 0;
}
