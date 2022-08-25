//
// Created by ACER on 27/05/2022.
//
#include "stdio.h"
#include "mymath.h"

int main(void) {
    printf("Add : %X\n", math_add(0x0FFF1111, 0x0FFF1111));

    printf("Mul : %I64x\n", math_mul(0x0FFF1111, 0x0FFF1111));

    printf("Div : %0.2f\n", math_div(100, 8));

    return 0;
}