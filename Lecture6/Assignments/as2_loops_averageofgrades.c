// Getting the average of 5 people's grade with the use of for loops 

// Input 57 85 97 16 82 
// Output 67.40

#include <stdio.h>

#define n_students 5 

int main(void){

	float grades[n_students], average, sum ; 
	int i ; 

	printf("Enter the scores on by one: "); 

	for(i = 0; i < n_students ; i++){

		printf("Enter grade for Student %d: ", i + 1); 
		scanf("%f", &grades[i]);
	}

	for(i = 0; i < n_students; i++){

		sum += grades[i]; 
	}

	average = sum/n_students ;

	printf("%.2f\n", average);

	return 0; 
}