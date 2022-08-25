//
// Created by ACER on 17/05/2022.
//

#include "stdio.h"

int main()
{

    char temps[20];

    printf("Input Your Character:");
    scanf("%s", &temps);
    fflush(stdin);

    for(short i=0; i<6; i++) {
        printf("\nYour Corresponding ASCII is : %u", temps[i]);
    }

    printf("\n\nPress Enter to Exit The Program...");
    while(getchar() != '\n') {

    }

    return 0;
}

