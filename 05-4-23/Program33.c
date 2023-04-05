// Write a Program to create a Structure named as a CAR, Datanumbers of car are as follows:
// Car
// 1. Car Name
// 2. Car Price
// 3. Car Seats

#include <stdio.h>
struct Car
{
    char name[50];
    float price;
    int seats;
};

int main()
{
    printf("----------------------------------\n");
    struct Car C1, C2, C3;
    printf("Enter Car Name: ");
    scanf("%s", C1.name);
    printf("Enter Car Price: ");
    scanf("%f", &C1.price);
    printf("Enter Car Seats: ");
    scanf("%d", &C1.seats);
    printf("Display Details of Car 1: ");
    printf("Name: %s, Price: %f, Seats: %d \n", C1.name, C1.price, C1.seats);
    printf("----------------------------------\n");

    printf("----------------------------------\n");
    printf("Enter Car Name: ");
    scanf("%s", C2.name);
    printf("Enter Car Price: ");
    scanf("%f", &C2.price);
    printf("Enter Car Seats: ");
    scanf("%d", &C2.seats);
    printf("Display Details of Car 2: ");
    printf("Name: %s, Price: %f, Seats: %d \n", C2.name, C2.price, C2.seats);
    printf("----------------------------------\n");

    printf("----------------------------------\n");
    printf("Enter Car Name: ");
    scanf("%s", C3.name);
    printf("Enter Car Price: ");
    scanf("%f", &C3.price);
    printf("Enter Car Seats: ");
    scanf("%d", &C3.seats);
    printf("Display Details of Car 3: ");
    printf("Name: %s, Price: %f, Seats: %d \n", C3.name, C3.price, C3.seats);
    printf("----------------------------------\n");

    return 0;
}

