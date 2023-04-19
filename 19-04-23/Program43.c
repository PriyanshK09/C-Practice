// Write a program to demonstrate fprintf
#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp;
int i;
char name[20];
float salary;
fp=fopen("Details.txt","w");
if(fp==NULL)
{
printf("\n The file could not be opened");
exit(1);
}
for(i=0;i<3;i++)
{
puts("\n Enter your name:");
gets(name);
fflush(stdin);
puts("\n Enter your salary:");
scanf("%f",&salary);
fprintf(fp,"%s \t %.2f\n",name,salary);
fflush(stdin);
}
fclose(fp);


}