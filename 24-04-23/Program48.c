// WAP TO DEMONSTRATE THE CONCEPT OF THE STRING
#include <stdio.h>
#include <string.h>

// - String Length
// int main()
// {
//     char string[]="Hello World";
//     printf("%d",strlen(string));
// }


// String Size
// int main()
// {
//     char string[]="Hello World";
//     printf("%d",sizeof(string));
// }

// - String Length 2
// int main()
// {
//     char string[]="Hello World, I am studying about how to print the string length";
//     printf("%d",strlen(string));
// }

// - String Reverese
// int main()
// {
//     char string[]="Hello World";
//     printf("%s",strrev(string));
// }

// - String LWR (Used for lower case)
// int main()
// {
//     char string[]="Hello World, ALL CAPS WILL BE CHANGED TO LOWER CASE";
//     printf("%s",strlwr(string));
// }

// - String UPR (Used for upper case)
// int main()
// {
//     char string[]="Hello World, all caps will be changed to upper case";
//     printf("%s",strupr(string));
// }

// - String Copy is used to copy the string (strcopy(destination,source))
int main()
{
    char string[]="Hello World";
    char string2[20];
    strcpy(string2,string);
    printf("%s",string2);
}