#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#define MAX_SIZE 1000


void printElements(int A[], int n){
   printf("[");
    for(int i  = 0; i < n; i++) {
        if(i == n-1){
            printf("%d", A[i]);
        }else{
            printf("%d", A[i]);
            printf(", ");
        }
    }
   printf("]");
}

int main() {
    int A[MAX_SIZE];
    int n;

    int option;
    printf("Enter size of  array (n): ");
    scanf("%d", &n);

    printf("\n");


    for(int i = 0; i < n; i++) {
        printf("Enter number at index  ");
        printf("%d", i) ;
        printf(" : ");
        scanf("%d", &A[i]);
    }

    printf("\n");
    printf("Array unsorted: ");
    printElements(A, n);
    printf("\n");


    printf("\n");
    printf("[1] Insertion Sort\n");
    printf("[2] Bubble sort\n");
    printf("[3] Selection sort\n");
    printf("\n");
    printf("Select an algorithm to sort this array: \n");

    scanf("%d", &option);
    printf("\n");
    printf("\n");


    printf("Sorting array...\n");
    printf("\n");
    printf("Array sorted: ");

    if(option==1){
        insertionSort(A, n);
    }else if(option==2){
        bubbleSort(A, n);
    }else if(option==3){
        selectionSort(A, n);
    }

    // prints all elements sorted
    printElements(A, n);

    printf("\n");

    printf("The array has been sorted! \n");

    printf("\n");

    return 0;
}
