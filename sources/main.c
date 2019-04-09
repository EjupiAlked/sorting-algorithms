#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#define MAX_SIZE 1000

int main() {
    int A[MAX_SIZE];
    int n;

    int option;
    printf("Enter size of  array (n): ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter number at index  ");
        printf("%d", i ) ;
        printf(" : ") ;
        scanf("%d", &A[i]);
    }

    printf("Insertion Sort [1] \n");
    printf("Bubble sort [2] \n");
    printf("Selection array [3] \n");
    printf("Select an algorithm to sort this array: \n");

    scanf("%d", &option);

    if(option==1){
        printf("Sorting array...\n");
        printf("Array sorted: ");
        InsertionSort(A, n);
    }

    // prints all elements sorted
    for(int i  = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}
