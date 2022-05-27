#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h>

//Function prototype
void scan_word(int occ[26]); 
bool is_anagram(int occ1[26], int occ2[26]); 

int main(){

	int i, occurence1[26] = {0}, occurence2[26] = {0} ; //Declaration of data types 
 	
 	int *occ1 = &occurence1[0], *occ2 = &occurence2[0]; //Declaring the arrays as a pointer
	
	scan_word(occ1); //Call for functions 
	scan_word(occ2); 

    is_anagram(occ1, occ2); 

    if(is_anagram(occ1, occ2) == true){ //if the return statement is true then it would print that it is an anagram 
    	printf("The words are anagrams\n");
    	return 0; 
    } else { // if false then it would satisfy this which means it is not an anagram. 
    	printf("The words are not anagrams\n"); 
    	return 0 ; 
    }
}

void scan_word(int occ[26]){ //Void function, no return statement. This function is responsible for representing which letters are in the word through an array

	char c ; //Declaration of variable c 

	printf("Enter word:  "); 

	while ((c = getchar()) != '\n') { //Receives user input which would be stored at variable c
        if (isalpha(c)){ //disregards anything other than letters
            occ[toupper(c) - 'A']++; //adds +1 onto the index of the corresponding letters 
        }
    }

}

bool is_anagram(int occ1[26], int occ2[26]){ //Function to check whether the array are equal which means it is an anagram

	int i ; 

	for(i = 0 ; i < 26 ; i++){ //For loops that will be used to check every index of both words 
		if(*(occ1+i) != *(occ2+i)){  //Uses the value in the array. *(occ1+i) = occurence1[i]. 
			return false ; //If there's an index value that are not the same then it is false which means it is not an anagram 
		} 
	}

	return true ; //else it would be true which means it is an anagram. 
}