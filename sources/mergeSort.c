#include <stdio.h>

void merge(int A[], int low, int mid, int high){

    int i, j, k;

    int B[100];

    i = low;
    j = mid+1;
    k = low;

    while(i<=mid && j<=high){ // when one of the array is finished
        if(A[i] < A[j]){
            B[k++] = A[i++];
        }else{
            B[k++] = A[j++];
        }
    }

    //only one for loop will be executed
    // nb: check conditions
    for(; i<=mid; i++)
        B[k++] = A[i];

    for(; j<=high; j++)
        B[k++] = A[j];

    // transfer elements
    for(i=low; i<=high; i++)
        A[i] = B[i];
}


void iterativeMergeSort(int A[], int n) {

    int p, low, high, mid, i;

    for(p=2; p<=n; p=p*2){ // size of lists, increments by 2 each iteration
        for(i=0; i+p-1 < n; i=i+p){ // merge all lists of size p in the array
            low = i;
            high = i + p - 1; // 2
            mid = (low + hight)/2 //find mid
            merge(A, low, mid, high); // merge lists of size p
            // 1-1 1-1 1-1 1-1 ---> 2 2 2 2 --> 2-2 2-2 --> 4 4 --> 4-4 --> 8
        }
    }

    // when array size is odd
    if(p/2 < n){
        merge(A, 0, (p/2) - 1, n-1)
    }
}


void recursiveMergeSort(int A[], int low, int high){
    if(low < high){
        mid = (low + high)/2;
        recursiveMergeSort(A, low, mid);
        recursiveMergeSort(A, mid+1, h);
        merge(A, low, mid, high);
    }
}


