// Program for fwrite a file
#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    FILE *fp;
    struct Student s[3] = {{1, "Rahul", 78.5}, {2, "Raj", 89.5}, {3, "Ravi", 90.5}};
    fp = fopen("student.txt", "wb");
    if (fp == NULL)
    {
        printf("File not found");
        exit(1);
    }
    fwrite(s, sizeof(s), 1, fp);
    fclose(fp);
    return 0;
}
