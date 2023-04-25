// strcmp - used to compare two strings
// syntax - strcmp(string1,string2)

// Write a program to compare two strings

#include <stdio.h>
#include <string.h>

int main()
{
    char string1[]="Hello World";
    char string2[]="Hello World";   
    printf("%d \n",strcmp(string1,string2));

    if(strcmp(string1,string2)==0)
    {
        printf("The strings are equal");
    }
    else
    {
        printf("The strings are not equal");
    }
}

// 0 = equal
// 1 = not equal
// -1 = not equal
