#include <stdio.h>

void swap(int *a, int *b) {	// swap the position of the two elements in the array
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int A[], int low, int high){
    int pivot = A[low];
    int i = low, j = high;

    do{
        do{i++;}
            while(A[i]<=pivot);

        do{j--;}
            while(A[i]>pivot);

        if(i<j)
            swap(&A[i], &A[j]);

    }while(i>j);


    swap(&A[low], &A[j])
    return j;
}


void bubbleSort(int A[], int low, int high) {
    int j;

    if(low < h){
        j = partition(A, low, high);
        quickSort(A, l, j);
        quickSort(A, j+1, h);
    }
}



