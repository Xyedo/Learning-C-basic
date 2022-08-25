//
// Created by ACER on 27/05/2022.
//
#include "stdio.h";

int main(void) {
    char val = 100;
    printf("The address of char is : %p", &val);

    char *pointVal = &val;
    {
        char readVal = *pointVal;
        printf("\nThe value from the pointer is : %d", readVal);
    }
    *pointVal = 65;
    printf("\nThe value after change is : %d", *pointVal);


    return 0;
}
