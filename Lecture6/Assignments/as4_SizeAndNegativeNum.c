// Specific size + print Negative elemenets 

// Input: N = 5 
// Input: N = 5 -1 3 4 -2 
// Output: -1 is a negative number. -2 is a negative number. 
#include <stdio.h>

int main(void){

	int N, i ; 

	printf("Enter N: ", N); 
	scanf("%d", &N); 

	int a[N] ; 

	for(i = 0; i < N; i++){

		printf("a[%d] = ", i); 
		scanf("%d", &a[i]);
	}

	printf("Negative numbers: \n"); 

	for( i=0 ; i<N ; i++){
		if(a[i] < 0){
			printf("a[%d] = %d is a negative number. \n", i, a[i]);

		}
	}

	return 0 ; 
}
