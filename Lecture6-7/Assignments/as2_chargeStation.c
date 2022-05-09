#include <stdio.h> //Preprocessor directive 

#define column 8 //To define the values of this particular variables. 
#define row 8  // 8 for a 8x8 matrix 

int main(void){

	int k, i ; //Declaring data types to the other variables 
	int road_networks[row][column] = {     // Multidimensional array - An array inside an array. 
										   // We have to use two square brackets [][] - one for rows and column 
		{1, 1, 0, 0, 0, 1, 0, 0},
		{1, 1, 1, 0, 0, 0, 0, 0}, 
		{0, 1, 1, 0, 1, 1, 0, 0}, 
		{0, 0, 0, 1, 1, 0, 0, 0},
		{0, 0, 0, 1, 1, 0, 0, 0},
		{1, 0, 1, 0, 0, 1, 0, 0},
		{1, 0, 0, 1, 0, 0, 1, 0}, 
		{0, 0, 0, 0, 0, 1, 0, 1} 
		
	};

	printf("A\tB\t[C]\t[D]\tE\tF\tG\tH\n"); //A, B, C, D... H. For better readability in the terminal 

	/*The use of for loops for rows and collumns*/
	for( i = 0 ; i < row ; i++ ){ 

		for( k = 0 ; k < column ; k++){

			printf("%d\t", road_networks[i][k]) ; 
		}

		printf("\n"); // To keep the 8x8 format 
	} 

	int loc ; // loc for the location that the user would like to input 

	printf("\nWhich point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
	scanf("%d", &loc); // Takes user input and stores in the loc variable

	if(loc == 0 || loc == 1){ // For the first 2 points. We satisfy that either 1 or 0 is the input 
		if(loc == 0){         // if-else statement for the which specific point the user would start on 
			printf("At point: A\n");
		} else if (loc == 1){
			printf("At point: B\n");
		}
		for(; loc < 8 ; loc++){ // for loop. The loop would keep on looping until the index's value is 1 because 1 means there is a pathway. 
			if(road_networks[loc][loc+1] == 1){ // The condition is that the next pathway is equal to 1 to check if the next has a pathway with the current station. 
				if(loc == 0){ //0 and 1 for their specific points. Else statement is used for when it reaches that nearest charging station which is at 'C'
					printf("Now at point A\n"); 
				} else if (loc == 1){
					printf("Now at point B\n");
				} else { 
					printf("Now at point C\npoint: C arrived to charging station\n");
				}
			}
		}

	} else if(loc == 2){ // Charging Station which means there's no need to look for a closer charging station. 
		printf("At point: C\npoint: C is a charging station"); 

	} else if(loc == 3){ // Charging Station which means there's no need to look for a closer charging station.
		printf("At point: D\npoint: D is a charging station");

	} else if(loc == 4){ // The 4th (from index) station is just next to the charging station at 'D'. 
		printf("At point: E\nNow at point E\n");
		if(road_networks[loc][loc-1] = 1){ //Subtracting 1 from the current index to verify if it's equivalent to 1 proves that there's a pathway between both station
			printf("Now at point D\npoint: D arrived to charging station");
		}

	}else if(loc == 5){ // The 5th (index) station would be similar to the 4th. Subtracting index (ex from 5 to 4) to until the 1 which shows the pathway. 
						
		printf("At point: F\n"); 
		for(i = 5; i < 8 ; loc--){  // for loops. Instead of ++, we use --. 
			if(road_networks[i][loc] == 1){ //When we get a value ewuivalent to 1 then there's the pathway to the charging station 
				printf("Now at point C\npoint: C arrived to charging station");
				break ; 
			}
		} 

	} else if(loc == 6){
		
		printf("At point: G\n"); // Same idea from 5th index, only changed the variable i for 6 instead of 5. 
		for(i = 6; i < 8 ; loc--){
			if(road_networks[i][loc] == 1){ 
				printf("Now at point D\npoint: D arrived to charging station");
				break ; 
			}
		} 


	} else if(loc == 7){ 
		
		printf("At point: H\n");  
		for(i = 7; i < 8 ; loc--){ // for loops to keep looping until we get the value we desire
			if(road_networks[i][loc] == 1){  
				printf("Now at point F\n");
				i -= 2 ; //Subtract 2 from the row so that we would be in the station's row. 
				if(road_networks[i][loc] == 1){ //if statement for the charging station. 
					printf("Now at point C\npoint: C arrived to charging station");
					break ; 
				}
			}
		} 

	} else {
		printf("Error. Your input is invalid! "); //For any input other than 0-7. 
	}	
	

	return 0 ; 
}