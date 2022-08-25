//
// Created by ACER on 27/05/2022.
//
#include "stdint.h"
#include "stdio.h"

void wait_for_user_input(void);

int main(void) {
    int32_t num1, num2;

    printf("Enter 2 numbers (give space between 2 nums) :");
    fflush(stdout);
    scanf("%d %d", &num1, &num2);
    printf("Bitwise AND (&)", (num1 & num2));
    printf("Bitwise AND(&) : %d\n", (num1 & num2));
    printf("Bitwise OR (|) : %d\n", (num1 | num2));
    printf("Bitwise XOR(^) : %d\n", (num1 ^ num2));
    printf("Bitwise NOT(~) : %d\n", (~num1));
    wait_for_user_input();
    return 0;
}

void wait_for_user_input(void) {
    printf("Press enter key to exit this application");
    while (getchar() != '\n') {

    }
    getchar();
}