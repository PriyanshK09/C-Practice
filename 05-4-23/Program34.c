//STRUCTURE ARRAY
#include<stdio.h>
struct student{
char name[50],grade[2];
float cgpa;
int roll;
};
int main(){
int n;
printf("Enter number of students : ");
scanf("%d",&n);
struct student t[n];
int i;
for(i=0;i<n;i++){
printf("Enter name of Student %d : ",i+1);
scanf("%s",t[i].name);
printf("Enter grade of Student %d : ",i+1);
scanf("%s",t[i].grade);
printf("Enter rollnumber of Student %d : ",i+1);
scanf("%d",&t[i].roll);
printf("Enter cgpa for Student %d : ",i+1);
scanf("%f",&t[i].cgpa);
}
for(i=0;i<n;i++){
printf("---------------------------------\n");
printf(" |Details of Student %d\n |Name : %s\n |Grade : %s\n |RollNumber : %d\n |CGPA : %.2f\n",i+1,t[i].name,t[i].grade,t[i].roll,t[i].cgpa);
printf("---------------------------------\n");
}
return 0;
}