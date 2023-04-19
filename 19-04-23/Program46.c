// fread of student.txt
#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    char name[20];
    float marks;
};

// Use fread() to read the file

int main()
{
    FILE *fp;
    struct Student s[3];
    int i;
    fp = fopen("student.txt", "rb");
    if (fp == NULL)
    {
        printf("File not found");
        exit(1);
    }
    fread(s, sizeof(s), 1, fp);
    for (i = 0; i < 3; i++)
    {
        printf("Roll: %d, Name: %s, Marks: %f\n", s[i].roll, s[i].name, s[i].marks);
    }
}