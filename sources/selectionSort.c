#include <stdio.h>

void swap(int *a, int *b) {	// swap the position of the two elements in the array
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int A[], int n) {
    int i, k, j;

    fo
    r(i=0; i<(n-1); i++){
        for(j=k=i; j<n; j++){
            if(A[j]<A[k]){
                k = j;
            }
        }
        swap(&A[i],&A[k]);
    }
}


