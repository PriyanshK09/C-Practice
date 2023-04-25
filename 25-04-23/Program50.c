// Write a program to copy a string without using an inbuilt function.
#include <stdio.h>
int main()
{
    char str1[20], str2[20];
    int i;
    printf("Enter a string: ");
    scanf("%s", str1);
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("Copied string is: %s", str2);
}

// Write a program to compare a string without using an inbuilt function.
// int main()
// {
//     char str3[20], str4[20];
//     int i, flag = 0;
//     printf("Enter a string: ");
//     scanf("%s", str3);
//     printf("Enter another string: ");
//     scanf("%s", str4);
//     for (i = 0; str3[i] != '\0' || str4[i] != '\0'; i++)
//     {
//         if (str3[i] != str4[i])
//         {
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 1)
//     {
//         printf("Strings are not equal.");
//     }
//     else
//     {
//         printf("Strings are equal.");
//     }
// }

// Write a program to find the length of a string without using an inbuilt function.
// int main()
// {
//     char str5[20];
//     int i, count = 0;
//     printf("Enter a string: ");
