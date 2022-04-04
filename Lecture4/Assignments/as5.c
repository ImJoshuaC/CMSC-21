#include<stdio.h>
int main(void){

  int i = 0, days, day1 ; 

  printf ("\nEnter number of days in month: ");
  scanf ("%d", &days);

  printf ("\nEnter the starting day of the week: ");
  scanf ("%d", &day1);
   
   if(days == 31 || days == 28 || days == 30){  
      if(day1 > 0 && day1 <= 7){
         if(day1 > 1){  
           while(i != day1){
               printf("   ");
               i++ ;     
             }
         }

        for (i = 1; i <= days; i++){
            printf ("%4d", i);

            if((day1 + i - 1) % 7 == 0){
               printf("\n"); 
            }
          }
       } else {
         printf("\nInvalid number of days to start on.");
       }

    } else {
      printf("\nInvalid number of days in a month."); 
    }  

   printf("\n\nNote that the first row might be out of line with the other rows."); 

  return 0;
}