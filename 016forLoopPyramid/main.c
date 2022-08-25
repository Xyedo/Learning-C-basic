//
// Created by ACER on 27/05/2022.
//
#include "stdio.h"
#include "stdint.h"
int main(void) {
    uint32_t hPyramid;
    printf("Enter height of pyramid: ");
    fflush(stdout);
    scanf("%d", &hPyramid);
    for (uint32_t i=1; i<=hPyramid; i++) {
        for (uint32_t j=i; j>=1; j--) {
            printf("%4d\t", j);
        }
        printf("\n");

    }

    return 0;
}