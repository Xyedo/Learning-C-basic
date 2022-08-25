//
// Created by ACER on 27/05/2022.
//
#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);

int main(void) {
    int32_t num, output;
    printf("Enter a number:");
    fflush(stdout);
    scanf("%d", &num);
    output = num | 0b10010000;
    printf("[input] [output] : 0x%x 0x%x\n", num, output);
    wait_for_user_input();
    return 0;
}

void wait_for_user_input(void) {
    printf("Press enter key to exit this application\n");
    while (getchar() != '\n') {

    }
    getchar();
}