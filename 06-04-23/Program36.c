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
        printf("\n Enter the name of the patient %d: ", i+1);
        scanf("%s", &P1.Patient_Name);
        printf("\n Enter the disease of the patient %d: ", i+1);
        scanf("%s", &P1.Disease);
        printf("\n Enter the ward number of the patient %d: ", i+1);
        scanf("%d", &P1.Ward_No);
        printf("\n Enter the total expense of the patient %d: ", i+1);
        scanf("%f", &P1.Total_Expense);
    }
    for (i=0; i<n; i++){
        printf("\n Patient %d details are: ", i+1);
        printf("\n Name: %s ", P1.Patient_Name);
        printf("\n Disease: %s ", P1.Disease);
        printf("\n Ward No: %d ", P1.Ward_No);
        printf("\n Total Expense: %f ", P1.Total_Expense);
    }
    return 0;
}