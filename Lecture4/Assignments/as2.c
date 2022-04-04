#include <stdio.h>

int main(void){
	
	int i = 11; //place holder number
	
	/* while(i < 10){
		printf("The number is %d\n", i); 
		i++ ;
	} */
	

	/*  for(; i < 10;){
		printf("The number is %d\n", i); 
		i++ ;
	} */

	do{
			printf("The number is %d\n", i); 
			i++ ;
	} while(i < 10); 

	return 0;

}

// The for and while loops will return nothing while the do while loop would still follow the statement for once. 
// for and while  == ""
// do while == "The number is 11"