#include <stdio.h>
struct Employee
{
    char ename[25];
    int ssn;
    float salary;
    struct dob
    {
        int day;
        int month;
        int year;
    } db1;
}emp = {"John", 123456789, 10000.00, {1, 1, 2000}};

int main()
{
    printf("Employee Name: %s", emp.ename);
    printf("SSN: %d", emp.ssn);
    printf("Salary: %f", emp.salary);
    printf("Date of Birth: %d/%d/%d", emp.db1.day, emp.db1.month, emp.db1.year);
    return 0;
}