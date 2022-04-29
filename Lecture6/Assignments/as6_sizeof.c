// sizeof operator syntax

/* Output:

Size of char data type: 1
Size of int data type: 4
Size of float data type: 4
Size pf double data type: 8

*/

#include <stdio.h> 

int main(void){
	
	printf("Size of char data type: %u\n", sizeof(char)); 
	printf("Size of int data type: %u\n", sizeof(int)); 
	printf("Size of float data type: %u\n", sizeof(float)); 
	printf("Size pf double data type: %u\n", sizeof(double)); 

	return 0 ;
}