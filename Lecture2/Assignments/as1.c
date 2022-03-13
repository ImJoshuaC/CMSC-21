#include <stdio.h>

int main(void){

	int digit1, digit2;

	printf("Please enter a 2-digit number:");
	/*%1d to insert one digit value from the input to the variable */
	scanf("%1d%1d", &digit1, &digit2); 

	printf("The reverse of your 2-digit number is %d%d", digit2, digit1);

	return 0; 

}