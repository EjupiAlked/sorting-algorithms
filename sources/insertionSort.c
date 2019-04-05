#include <stdio.h>
#define MAX_SIZE 1000

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

int main() {
    int A[MAX_SIZE];
    int n;
    printf("Enter size of  array (n): ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter number at index  ");
        printf("%d", i ) ;
        printf(" : ") ;
        scanf("%d", &A[i]);
    }
    printf("Sorting array...\n");
    printf("Array sorted: ");
    InsertionSort(A, n);

    // prints all elements sorted
    for(int i  = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}
