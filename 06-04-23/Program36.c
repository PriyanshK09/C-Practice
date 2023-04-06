// WAP for structure Patient_Detail with details Patient Name, Disease, Ward No, Total Expense to Pay
#include <stdio.h>
struct Patient_Detail
{
    char Patient_Name[20];
    char Disease[20];
    int Ward_No;
    float Total_Expense;
};

int main(){
    struct Patient_Detail P1;
    int n, i;
    printf("Enter the number of patients: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter Patient Name: ");
        scanf("%s", P1.Patient_Name);
        printf("Enter Disease: ");
        scanf("%s", P1.Disease);
        printf("Enter Ward No: ");
        scanf("%d", &P1.Ward_No);
        printf("Enter Total Expense: ");
        scanf("%f", &P1.Total_Expense);
        printf("Patient Name: %s    Disease: %s    Ward No: %d    Total Expense: %f \n", P1.Patient_Name, P1.Disease, P1.Ward_No, P1.Total_Expense);
    }
    return 0;
}