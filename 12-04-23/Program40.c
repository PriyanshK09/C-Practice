#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("xyz.txt", "w");
    if (fptr == NULL)
    {
        printf("File does not exist");
        return 0;
    }
    else
    {
        printf("File opened successfully");
    }
    fprintf(fptr, "Hello World");
    fclose(fptr);
    
    return 0;
}
