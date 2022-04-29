// Designated Initializers 

/*
 Output : b[0] = 0
b[1] = 0
b[2] = 29
b[3] = 0
b[4] = 48
b[5] = 0
b[6] = 0
b[7] = 0
b[8] = 0
b[9] = 7
b[10] = 0
b[11] = 0
b[12] = 0
b[13] = 0
b[14] = 0 

*/

#include <stdio.h> 

int main(void){
	
	int i, b[15] = { [2] = 29, [9] = 7, [4] = 48}; 

	for(i = 0 ; i < 15 ; i++){

		printf("b[%d] = %d\n", i, b[i]); 

	}
}