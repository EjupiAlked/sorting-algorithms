#include <stdio.h>
#include "header.h"
#include "swap.h"

void swap(int *a, int *b) {	// swap the position of the two elements in the array
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int A[], int n) {
    int i, j;
    int flag = 0; // the flag is required to make the algorithm adaptive

    /*
    for n elements, (n-1) passes are required
    */
    for(i = 0; i < (n-1); i++) {
            flag = 0;
            for(j = 0; j < (n-i-1); j++) {     // (n-i-1) since the succesive pass has one less comparison to perform
                    if(A[j] < A[j+1]) {
                        swap(&A[j], &A[j+1]);
                        flag = 1; // set flag to 1 (a comparison was done)
                    }
            }
            if(flag==0) {  /* if flag is 0 then the array is already sorted, there is no need to more comparisons */
            break;
            }
    }
}


