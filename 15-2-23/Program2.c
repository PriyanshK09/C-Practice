// Write a program to implement a result system

#include <stdio.h>

int main()
{
    int a;
    printf("Marks of Python = ");
    scanf("%d", &a);
    int b;
    printf("Marks of Maths = ");
    scanf("%d", &b);
    int c;
    printf("Marks of Chemistry = ");
    scanf("%d", &c);

    int avg;
    avg = (a+b+c)/3;
    printf("Average Marks = %d\n", avg);
    
    if ( avg >= 90 ){
        printf("Grade O");
    }
    else if ( avg >= 80){
        printf("Grade A");
    }
    else if ( avg >= 70){
        printf("Grade B");
    }
    else if ( avg >= 60){
        printf("Grade C");
    }
    else if ( avg >= 50){
        printf("Grade D");
    }
    else {
        printf("Reappear!");
    }

}