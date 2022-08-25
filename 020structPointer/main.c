//
// Created by ACER on 27/05/2022.
//
#include<stdio.h>

struct DataSet {
    char data1;
    int data2;
    char data3;
    short data4;
};


void displayMemberElements(struct DataSet const *const data);


int main(void) {

    struct DataSet data;

    data.data1 = 0x11;
    data.data2 = 0xFFFFEEEE;
    data.data3 = 0x22;
    data.data4 = 0xABCD;

    displayMemberElements(&data);


    getchar();

    return 0;

}


void displayMemberElements(struct DataSet const *const data) {
    printf("data1 = %X\n", data->data1);
    printf("data2 = %X\n", data->data2);
    printf("data3 = %X\n", data->data3);
    printf("data4 = %X\n", data->data4);
}
