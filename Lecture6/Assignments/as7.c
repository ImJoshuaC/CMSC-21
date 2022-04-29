// Output : Total elements the array can hold is: 16

#include <stdio.h>

int main(void){

	int number[16] ; 

	size_t n = sizeof(number)/sizeof(number[0]); 
	printf("Total elements the array can hold is: %d\n", n); 

	return 0 ; 
}