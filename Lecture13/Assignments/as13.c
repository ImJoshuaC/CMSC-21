#include <stdio.h> //preprocessor directives 
#include <math.h>

struct line { //Structure 

	float *midpoint ; 
	float slope ; 
	float distance ; 

	struct point { //Nested Structure for the x and y 

		float x ; 
		float y ; 

	} point1, point2 ; //two variables for two sets of x and y. Declaring the variables for struct point

} ; 

//Function prototype 
float solveSlope(struct line line1); 
float *solveMidpoint (struct line line1);
float solveDistance(struct line line1); 
void getSlopeInterceptForm(struct line line1);

float m, dis, b, x, y ; //Global Variables 

int main(){ //main function 

	struct line line1;  //Declaration of the variables for struct line - line1 

	printf("\nEnter the x and y for point1: "); //Asks for user input 
	scanf("%f %f", &line1.point1.x, &line1.point1.y); //Stored in the corresponding place. We have to use (.) through each variable until we reach the desired variable. 
														// In this case, we want the struct inside point. Therefore, we have to go through struct line (line1) and struch point (point1) then we reach the variable we desire (x and y)
	printf("Enter the x and y for point2: "); //Same process but passes through point 2 instead since we need two sets of x and y. 
	scanf("%f %f", &line1.point2.x, &line1.point2.y);

	m = solveSlope(line1); //Call for function to solve for slope
	printf("\nSlope: %f", m) ;

	solveMidpoint(line1); //Call for function to solve for midpoint
	printf("\nMid Point: %f %f", x, y); 

	solveDistance(line1); //Call for function to solve for the distance 
	printf("\nDistance between two points: %f", dis); 

	getSlopeInterceptForm(line1); //Call for function to solve for the slope intercept form
	printf("\ny = %fx + (%f)", m, b);

	return 0 ; //Return statement
}

float solveSlope(struct line line1){ //Slope function 

	m = (line1.point1.y - line1.point2.y)/(line1.point1.x - line1.point2.x) ; //Formula. Subtract the Ys and Xs then divide. 
																				//Stored at m so that we can use the slope for the slope intercept form 
	return m ; //Return statement 
}

float *solveMidpoint(struct line line1){ //Midpoint function wherein we have a pointer data type 
//Separated the x and y 
	x = ((line1.point1.x + line1.point2.x)/2); //Formula. Add both x or y then divide by two  
	y = ((line1.point1.y + line1.point2.y)/2); 
 	
 	return &x, &y ; //Return statement
}

float solveDistance(struct line line1){ //Distance function 

	x = (line1.point1.x - line1.point2.x) * (line1.point1.x - line1.point2.x); //Multiplied twice to get the squared (^2)
	y = (line1.point1.y - line1.point2.y) * (line1.point1.y - line1.point2.y);

	dis = sqrt(x + y); //Used the square root function from the math preprocessor directives and stored at the variable dis. 

	return dis ; //Return statement 
}

void getSlopeInterceptForm(struct line line1){ //Slope Intercept function. Void - data type means no return statement 

	b = line1.point1.y - (m * line1.point1.x) ; //Formula to get the b. 
												// y - (mx) = b

}
