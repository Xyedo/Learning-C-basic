//
// Created by ACER on 27/05/2022.
//
//
// Created by ACER on 27/05/2022.
//
#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);

void evenOrOdd(int num);

int main(void) {
    int32_t num;
    printf("Enter a number:");
    fflush(stdout);
    scanf("%d", &num);
    evenOrOdd(num);
    wait_for_user_input();
    return 0;
}

void evenOrOdd(int num) {
    if (num & 1)
        printf("%d is an odd number\n", num);
    else
        printf("%d is an even number\n", num);

}

void wait_for_user_input(void) {
    printf("Press enter key to exit this application\n");
    while (getchar() != '\n') {

    }
    getchar();
}