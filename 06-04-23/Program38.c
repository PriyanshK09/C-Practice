#include <stdio.h>
struct Address
{
    char HouseName[25];
    char City[25];
    char StreetName[25];
};
struct Employee
{
    int ID;
    char Name[25];
    float Salary;

    struct Address Add;
};
int main()
{
    struct Employee E;
    printf("Enter Employee ID: ");
    scanf("%d", &E.ID);
    printf("Enter Employee Name: ");
    scanf("%s", E.Name);
    printf("Enter Employee Salary: ");
    scanf("%f", &E.Salary);
    printf("Enter Employee House Name: ");
    scanf("%s", E.Add.HouseName);
    printf("Enter Employee City: ");
    scanf("%s", E.Add.City);
    printf("Enter Employee Street Name: ");
    scanf("%s", E.Add.StreetName);
    printf("\n Details of Employees");
    printf("\n ID: %d", E.ID);
    printf("\n Name: %s", E.Name);
    printf("\n Salary: %f", E.Salary);
    printf("\n House Name: %s", E.Add.HouseName);
    printf("\n City: %s", E.Add.City);
    printf("\n Street Name: %s", E.Add.StreetName);
    return 0;
}

