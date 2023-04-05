#include <stdio.h>
struct Teacher
{
    char name[50];
    char course_name[50];
    int uid;
    float salary;
};

int main()
{
    struct Teacher T1 = {"Rajesh", "C", 1, 10000.00};
    struct Teacher T2 = {"Raju", "Python", 1, 10000.00};
    printf("Display Details of Teacher 1");
    printf("Name: %s, Course Name: %s, UID: %d, Salary: %f \n", T1.name, T1.course_name, T1.uid, T1.salary);
    printf("Display Details of Teacher 2");
    printf("Name: %s, Course Name: %s, UID: %d, Salary: %f", T2.name, T2.course_name, T2.uid, T2.salary);
    return 0;
}