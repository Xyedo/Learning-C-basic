//
// Created by ACER on 27/05/2022.
//
#include <stdio.h>
int main(void) {
    float number1, number2, number3;
    float average;

    printf("Enter the first number:");
    fflush(stdout);
    scanf("%f", &number1);
    printf("\nEnter the second number:");
    fflush(stdout);
    scanf("%f", &number2);
    printf("\nEnter the third number:");
    fflush(stdout);
    scanf("%f", &number3);

    average = (float) (number1 + number2 + number3)/3;
    printf("The average is %f", average);
    printf("\nPress Enter key to exit the application");

    while(getchar() != '\n') {

    }
    getchar();
    return 0;
}