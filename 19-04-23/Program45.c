// Writing Structure record using fwrite() function
#include <stdio.h>
#include <stdlib.h>

struct student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    FILE *fp;
    struct student s[3];
    int i;
    fp = fopen("student.txt", "wb");
    if (fp == NULL)
    {
        printf("File not found");
        exit(1);
    }
    for (i = 0; i < 3; i++)
    {
        printf("Enter roll, name and marks of student %d: ", i + 1);
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }
    fwrite(s, sizeof(s), 1, fp);
    fclose(fp);
    return 0;
}