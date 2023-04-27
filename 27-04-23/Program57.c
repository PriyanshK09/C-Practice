// WAP strcmp without inbuilt functions
#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int i;
    printf("Enter first string: ");
    scanf("%s",str1);
    printf("Enter second string: ");
    scanf("%s",str2);
    for(i=0; str1[i]==str2[i] && str1[i]!='\0'; i++);
    if(str1[i]-str2[i]==0)
        printf("Both strings are equal");
    else
        printf("Both strings are not equal");
    return 0;
}