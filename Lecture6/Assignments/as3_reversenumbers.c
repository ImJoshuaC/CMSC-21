// Reversing 10 numbers

// Input: 1 2 3 4 5 6 7 8 9 10 
// Output: 10 9 8 7 6 5 4 3 2 1 

#include <stdio.h> 

#define N 10 

int main(void){

	int a[N], i; 

	printf("Enter %d numbers: \n", N); 

	for(i = 0; i < N; i++){

		printf("a[%d] = ", i); 
		scanf("%d", &a[i]); 

	}

	printf("In reverse order: "); 

	for(i = N - 1 ; i >= 0 ; i--){ 
		printf("  %d", a[i]);

	}

	printf("\n"); 

	return 0 ; 
}