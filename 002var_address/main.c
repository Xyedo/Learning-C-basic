//
// Created by ACER on 27/05/2022.
//
#include <stdio.h>

int main(void)
{
    char a1 = 'A';
    /*
    char a2 = 'p';
    char a3 = 'p';
    char a4 = 'l';
    char a5 = 'e';
    char a6 = ':'; */
    //char a7 = ')';



    unsigned long long int addressOfa1 =  ( unsigned long long int  )&a1;

    printf("Address of variable a1 = %I64x\n",addressOfa1);




    return 0;
}