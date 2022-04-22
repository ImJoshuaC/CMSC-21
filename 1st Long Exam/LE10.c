#include <stdio.h>
#include <math.h>

int main(void){
 	
	float x, z, y = 1, i = 0, j, tol = 0.00001;
	double checker ;

	printf("Enter a positive number: "); 
	scanf("%f", &x); //Ask and receive input for the x value 

	while(y != 0){ //Used while loop because there's no specific information on when the loop should stop

		z = x/y ;  
		y = 0.5*(y + z); //Equations used to get the square root 

		i++ ; //Counter for the program 

		if(i >= 6){ //If statement that has a condition of being greater than or equal to 6. 
					// This is because usually by the 6th time/6th cycle of the loop, the approximate is there already 
			checker = y - j ; //Subtract the 6th y from the 5th y and get the absoulute value 
			fabs(checker); 
			if(checker <= tol){ //If it is within the range of the tol then the y should be the approximate square root 
				printf("The approximate square root of %f is %f", x , y); 
				break ; // Stop the loop 
			}
		}

		j = y ; // Added j so that there would be a y that would be stored with previous y

	}

	return 0 ; 
 	} 