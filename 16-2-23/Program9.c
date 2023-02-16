#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
        printf("%c is a vowel", ch);
        break;
    case 'e':
        printf("%c s a vowel", ch);
        break;
    case 'i':
        printf("%c s a vowel", ch);
        break;
    case 'o':  
        printf("%c s a vowel", ch);
        break;
    case 'u':  
        printf("%c s a vowel", ch);
        break;
    default:
        printf("%c s a consonant", ch);
        break;
    }
}