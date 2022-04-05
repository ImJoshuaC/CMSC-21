#include <stdio.h>

int main(void){

	int Num1, Num2 ; 

	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &Num1, &Num2);

	 switch(Num1){
	 	case 1: 
	 		if(Num2 == 1){
	 			printf("The number you entered in words is eleven.\n");
	 		} else if(Num2 == 2){
	 			printf("The number you entered in words is twelve.\n");
	 		} else if(Num2 == 3){
	 			printf("The number you entered in words is thirteen.\n");
	 		} else if(Num2 == 4){
	 			printf("The number you entered in words is fourteen.\n");
	 		} else if(Num2 == 5){
	 			printf("The number you entered in words is fifteen.\n");
	 		} else if(Num2 == 6){
	 			printf("The number you entered in words is sixteen.\n");
	 		} else if(Num2 == 7){
	 			printf("The number you entered in words is seventeen.\n");
	 		} else if(Num2 == 8){
	 			printf("The number you entered in words is eighteen.\n");
	 		} else if(Num2 == 9){
	 			printf("The number you entered in words is nineteen.\n");
	 		} 
	 		break; 

		case 2:
			printf("The number you entered in words is twenty"); 
			break;

		case 3:
			printf("The number you entered in words is thirty"); 
			break; 

		case 4:
			printf("The number you entered in words is forty"); 
			break;

		case 5:
			printf("The number you entered in words is fifty"); 
			break;

		case 6:
			printf("The number you entered in words is sixty"); 
			break;

		case 7:
			printf("The number you entered in words is seventy"); 
			break;

		case 8:
			printf("The number you entered in words is eighty"); 
			break;

		case 9:
			printf("The number you entered in words is ninety"); 
			break;
	}

	if(Num1 != 1){
		switch(Num2){
			case 0: 
				printf(".\n");
				break; 
			case 1: 
				printf("-one.\n");
				break; 
			case 2: 
				printf("-two.\n");
				break; 
			case 3: 
				printf("-three.\n");
				break; 
			case 4: 
				printf("-four.\n");
				break; 
			case 5: 
				printf("-five.\n");
				break;  
			case 6: 
				printf("-six.\n");
				break; 
			case 7: 
				printf("-seven.\n");
				break; 
			case 8: 
				printf("-eight.\n");
				break; 
			case 9: 
				printf("-nine.\n");
				break; 
			} }
	
	return 0 ; 
}