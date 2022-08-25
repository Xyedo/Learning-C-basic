//
// Created by ACER on 27/05/2022.
//
#include "stdio.h"
#include "stdint.h"
int main(void) {
    int32_t num1, num2;
    printf("Enter start and end numbers(give space between 2 nums :");
    fflush(stdout);
    scanf("%d %d", &num1, &num2);
    while(num2 <= num1) {
        printf("the end number should be greater than start number\n");
        printf("Enter start and end numbers(give space between 2 nums :");
        fflush(stdout);
        scanf("%d %d", &num1, &num2);
    }
    for(;num1 <= num2; num1++) {
        if(!(num1 &1))
            printf("%4d\t", num1);

    }
    return 0;
}