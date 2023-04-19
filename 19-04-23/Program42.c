// Program to demonstrate a use of fscanf() function
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char name[80];
    int roll_no;
    int x;

    fp = fopen("student.txt", "r");
    if (fp == NULL)
    {
        printf("\n Error in opening file");
        exit(1);
    }
    x = fscanf(fp, "%s %d", name, &roll_no);
    printf("Name = %s and Roll No = %d", name, roll_no);
    fclose(fp);
    return 0;
}