//
// Created by ACER on 20/05/2022.
//
#include "stdio.h"

int main() {
    char val = 100;
    printf("The address of char is : %d", &val);

    char *pointVal = &val;
    {
        char readVal = *pointVal;
        printf("The value from the pointer is : %c", readVal);
    }
    *pointVal = 65;
    printf("The value after change is : %c", *pointVal);


    return 0;

}


