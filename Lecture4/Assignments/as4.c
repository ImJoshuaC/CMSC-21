#include <stdio.h>

int main(void){

	int n, power = 0; 

	while(power >= 0){ 
		if(power == 0){
			power++ ; 
			printf("%d\n", power);
		}else{
			printf("%d\n", power = 2 * power);  
			if(power == 1024){ 
				break;
			}
		}
	}
	return 0 ; 
} 