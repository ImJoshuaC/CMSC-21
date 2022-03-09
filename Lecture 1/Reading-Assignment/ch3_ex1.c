#include <stdio.h>
	
int main(void){

/*The int and float represents the declared value of the variables. The int would be 
storing integer values and the float would store decimal values. */

int i, j; 
float x, y;

/*The "i, j, x, y" are variables that would be holding/storing the assigned values */

i = 10 ; 
j = 20 ;
x = 43.2892f ;
y = 5527.0f ;

/*The printf function would print the string along with the desired variables. We use
%d and %f to represent the data type of the values and followed by their variables (in order to the 
string being printed) after the string. In this case, i would go first and followed by j and so on. */

printf("i %d, j = %d, x = %f, y = %f\n", i, j, x, y); 

}