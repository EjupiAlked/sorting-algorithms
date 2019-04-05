	#include <stdio.h>
	#define MAX_SIZE 1000

	// swap the position of the two elements in the array
	void swap(int *a, int *b) {	
		int temp = *a;
		*a = *b;
		*b = temp;
	}

	void bubbleSort(int A[], int n) {
		int i, j, flag = 0;

		/*
			for n elements, (n-1) passes are required
		*/
		for(i = 0; i < (n-1); i++) {
				flag = 0;
				//(n-i-1) since the succesive pass has one less comparison to perform 
				for(j = 0; j < (n-i-1); j++) {
						if(A[j] < A[j+1]) {
								swap(&A[j], &A[j+1]);
								flag = 1; // set flag to 1 (a comparison was done)
						}
				}

				/*
					if flag is 0 then the array is already sorted
					there is no need to more comparisons
				*/
				if(flag==0) {
					break;
				}
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
		bubbleSort(A, n);

		// prints all elements sorted
		for(int i  = 0; i < n; i++) {
			printf("%d ", A[i]);
		}

		return 0;
	}
