// 1.) strcmp - used to compare two strings
// syntax - strcmp(string1,string2)

// Write a program to compare two strings

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char string1[]="Hello World";
//     char string2[]="Hello World";   
//     printf("%d \n",strcmp(string1,string2));

//     if(strcmp(string1,string2)==0)
//     {
//         printf("The strings are equal");
//     }
//     else
//     {
//         printf("The strings are not equal");
//     }
// }

// 0 = equal
// 1 = not equal
// -1 = not equal


// 2.) strcmp - is used to compare two strings upto a certain limit
// syntax - strncmp(string1,string2,limit)

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char string1[]="Hello World";
//     char string2[]="Hello World";   
//     printf("%d \n",strncmp(string1,string2,5));

//     if(strncmp(string1,string2,5)==0)
//     {
//         printf("The strings are equal");
//     }
//     else
//     {
//         printf("The strings are not equal");
//     }
// }

// 3.) stricmp - is used to compare two strings but ignores case sensitivity
// syntax - stricmp(string1,string2)

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char string1[]="Hello World";
//     char string2[]="hello world";   
//     printf("%d \n",stricmp(string1,string2));

//     if(stricmp(string1,string2)==0)
//     {
//         printf("The strings are equal");
//     }
//     else
//     {
//         printf("The strings are not equal");
//     }
// }

// String Compare using Dynamic Input
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char string1[100];
//     char string2[100];
//     printf("Enter the first string: ");
//     gets(string1);
//     printf("Enter the second string: ");
//     gets(string2);
//     printf("%d \n",strcmp(string1,string2));

//     if(strcmp(string1,string2)==0)
//     {
//         printf("The strings are equal");
//     }
//     else
//     {
//         printf("The strings are not equal");
//     }
// }