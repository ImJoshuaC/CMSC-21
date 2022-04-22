#include <stdio.h>

int main(){

	int row, column = 0 ; 
	int size = 0 ; 
	char cont = 'y'; 

	//Used cont == 'y' for satisfying whether the user would do another square or not. Also, cont = 'y' would remain with the same value until to that point, so for the doing the square it wouldnt change. 
	while (cont == 'y'){  
		printf("Enter square size:"); 
		scanf("%d", &size); //%d for decimal inputs 

		for(column = 1 ; column <= size ; column++){ //column++ so that it would keep adding 1 per cycle in the loop until we reach the inputted size 
			for(row = 1 ; row <= size; row++){ // row <= so that the row would also be equivalent to the column. It would still keep looping until the desired size is reached 
				if (column == 1 || column == size || row == 1 || row == size){ // This would leave hollow spaces in the square. Only the first row/column and last row/columm would be filled with asterisk 
					printf("*");

				} else {
					printf(" ");
				}
			}

			printf("\n"); //To form a square we have to add another space. So that the output would not be asterisk in one line. 
		}

		printf("Print another square? Enter y or n: "); 
		scanf(" %c", &cont); //%c for character input

		if (cont == 'n'){
			printf("Program Terminated\n"); 
			
		} else if (cont != 'n' && cont != 'y'){ //For inputs that are not n or y, then it would re-ask for another input 
			printf("Not a valid choice. \n"); 

			printf("Print another square? Enter y/n: "); 
			scanf(" %c", cont); 
		}

	}

	return 0 ; 
}