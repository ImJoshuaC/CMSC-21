#include <stdio.h>
	
int main(void)
{

/*Declares the value of the variable to be integer (i) and a float/double (x) */
	int i;
	float x;

/*Storing the values into the variable. .f to signify that the value is a float.  */
	i = 40;
	x = 839.21f;

/*Prints the strings in the terminal. 
The use of %5d,%-5d,%5.3d in this case is to indicate the spaces that each variable will take when printed. 
In this case, %5d means that it reqiures the value to have 5 minimmum characters after the value, %-5d requires a minimum of 5 characters after the value, 
%5.3 requires minimum of 5 characters AND 3 digits. (NOTE: it includes the value in the count of characters)  */ 

	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);


/*%10.3f is the same as %5.3d but in this case we would get 3 digits on the decimal instead of just a total of 3 digits. 
These are commonly used to show different format for the output (either integers or float). */

	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x, x);

	return 0;

}