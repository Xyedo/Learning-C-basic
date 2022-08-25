//
// Created by ACER on 27/05/2022.
//
#include "stdio.h"

int main(void) {
    unsigned char data = (unsigned char) (0x87 + 0xFF00);
    float result = (float) 80/3;
    printf("Data : %u result : %f\n", data, result);
    return 0;
}