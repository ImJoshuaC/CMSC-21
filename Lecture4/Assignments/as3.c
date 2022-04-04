#include <stdio.h>

int main(void){
	
	int i = 11; //place holder number

	do{
		if(i < 10){
			printf("The number is %d\n", i); 
			i++ ;}
	} while(i < 10); 

	return 0 ; 

}

// Would return no values like the while and for loops. 