#include <stdio.h>
#include "header.h"

void InsertionSort(int A[] , int n) {
    int i, j, x;

    for(i = 1; i < n; i++){ // loop for passes ( [n-1] passes in total)
        j = i -1;
        x = A[i]; // element to "insert"

        while(j > -1 && A[j] > x) {
            A[j+1] = A[j]; // shift
            j--;
        }
        A[j+1] = x;
    }
}

