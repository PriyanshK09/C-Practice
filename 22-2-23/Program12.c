#include <stdio.h>
int main(){
    int fact=1, num;
    printf("Enter Number: ");
    scanf("%d", &num);
    // factorial
    for (int i = num; i > 1; i--)
    {
        fact = fact*i;
    }
    printf("%d", fact);
}