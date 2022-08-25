//
// Created by ACER on 27/05/2022.
//
#include "stdint.h"
#include "stdio.h"
int main(void) {
    uint8_t const data =10;
    printf("Value = %u\n", data);
    uint8_t *ptr = (uint8_t *) &data;
    *ptr =50;
    printf("value = %u\n", data);
    return 0;
}