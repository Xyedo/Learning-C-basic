//
// Created by ACER on 27/05/2022.
//
#include <stdio.h>
#include <stdint.h>

void parsingInputArray(uint32_t const *const arr, uint32_t const *const len, uint32_t const what);

void swapArray(uint32_t *const arr1, uint32_t *const arr2, uint32_t const *const lenArr1, uint32_t const *const lenArr2);

void printArray(uint32_t const *const arr, uint32_t const *const len, uint32_t const what);

int main(void) {
    uint32_t lenArr1, lenArr2;

    printf("Array swapping program\n");
    printf("Enter no of elements of Array-1 and Array-2: ");
    scanf("%d %d", &lenArr1, &lenArr2);
    fflush(stdin);
    uint32_t arr1[lenArr1], arr2[lenArr2];
    parsingInputArray(arr1, &lenArr1, 1);
    parsingInputArray(arr2, &lenArr2, 2);
    printArray(arr1, &lenArr1, 1);
    printArray(arr2, &lenArr2, 2);
    swapArray(arr1, arr2, &lenArr1, &lenArr2);
    printf("\nArray is swapped, the result is:\n");
    printArray(arr1, &lenArr1, 1);
    printArray(arr2, &lenArr2, 2);
    return 0;
}

void parsingInputArray(uint32_t const *const arr, uint32_t const *const len, uint32_t const what) {
    for (uint32_t i = 0; i < *len; i++) {
        printf("\nEnter the Array-%i value of index %i: ", what, i);
        scanf("%d", &arr[i]);
    }
}

void printArray(uint32_t const *const arr, uint32_t const *const len, uint32_t const what) {
    printf("\nthe value of Array-%i is : \n", what);
    for (uint32_t i = 0; i < *len; i++) {
        printf("%i\t", arr[i]);
    }
}

void
swapArray(uint32_t *const arr1, uint32_t *const arr2, uint32_t const *const lenArr1, uint32_t const *const lenArr2) {
    uint32_t iterArr1 = 0, iterArr2 = 0;
    while (iterArr1 < *lenArr1 && iterArr2 < *lenArr2) {
        uint32_t temp = arr1[iterArr1];
        arr1[iterArr1] = arr2[iterArr2];
        arr2[iterArr2] = temp;
        iterArr1++;
        iterArr2++;
    }
//    while (iterArr2 <= *lenArr2) {
//        arr1[iterArr1] = arr2[iterArr2];
//        iterArr2++;
//    }
//    while (iterArr1 <= *lenArr1) {
//        arr2[iterArr2] = arr1[iterArr1];
//        iterArr1++;
//    }
//    uint32_t temp = *lenArr1;
//    *lenArr1 = *lenArr2;
//    *lenArr2 = temp;
}
// #include <stdio.h>
// void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n);
// int main() {
//     // Write C code here
//     int m=3;
//     int n=3;
//     int arr1[] = {1,2,3,0,0,0};
//     int arr2[] = {2,5,6};
//     merge(arr1,sizeof(arr1), m, arr2, sizeof(arr2), n);
//     for (char i=0; i<sizeof(arr1); i++) {
//         printf("%d",arr1[i]);
//     }
// }
// void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
//     int i1,i2,i;
//     m--;
//     n--;
//     while(m>=0 && n>=0) {
//         if (nums1[i1] >= nums2[i2]) {
//             for (int j=i;j<nums1Size; j++) {
//                 nums1[j] = nums1[j+1];
//             }
//             nums1[i] = nums1[i2];
//             i2++; 
//             n--;
//         }
//         else {
//             m--;
//         }
//         i++;
//         i1++;
//     }
//     while(n>=0) {
//         nums1[i] = nums1[i2];
//         i++;
//         n--;
//         i2++;
//     }
// }