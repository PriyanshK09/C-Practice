#include <stdio.h>
int main(){
    int total_chocolates, number_of_students;

    printf("Enter the total number of Chocolates: ");
    scanf("%f", &total_chocolates);

    printf("Enter the number of students: ");
    scanf("%f", &number_of_students);

    float chocolates_per_student;
    chocolates_per_student = total_chocolates / number_of_students;
    float chocolates_left;
    chocolates_left = total_chocolates % number_of_students;

    printf("Each student gets %f chocolates and there are %f chocolates left over.", chocolates_per_student, chocolates_left);
    }