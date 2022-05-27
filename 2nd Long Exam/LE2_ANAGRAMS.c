#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h>

// Function prototypes
void scan_word(int occurence[26]); 
bool is_anagram(int occurence1[26], int occurence2[26]); 

int main(){ //main function 

	int i, occurence1[26] = {0}, occurence2[26] = {0} ; // Declaration of variables. 

	scan_word(occurence1); //Call for function scan_word with argument occurence1

	scan_word(occurence2); //Call for function scan_word with argument occurence2 

    is_anagram(occurence1, occurence2); //Call for function is_anagram with arguments occurence1 and 2

    if(is_anagram(occurence1, occurence2) == true){ //After the is_anagram function is ran, we would know if this statement is true or false. If true then it means the we have an anagram. 
    	printf("The words are anagrams\n"); //print statement for anagrams 
    	return 0; 
    } else {
    	printf("The words are not anagrams\n"); //print statement for not anagrams
    	return 0 ; 
    }
}

void scan_word(int occurence[26]){ //Void function, no return statement. This function is responsible for representing which letters are in the word through an array

	char c ; //Declaration of variable c 

	printf("Enter word:  "); 

	while ((c = getchar()) != '\n') { //Receives input from user then stored in c 
        if (isalpha(c)){ // Disregards characters that aren't letters in the input 
            occurence[toupper(c) - 'A']++; //Capitalizes each letter in the word then adds +1 to the corresponding array index of the letter (ex. A - 0, B - 1)
        }
    }

}

bool is_anagram(int occurence1[26], int occurence2[26]){ //bool function, we expect a return of true or false. 
														// This function is responsible in checking whether both words are anagrams of each other

	int i ; // Declaration of variable's data type  

	for(i = 0 ; i < 26 ; i++){ // For loops. This is run to check for each index through variable_name[index]
		if(occurence1[i] != occurence2[i]){ //if there is an index which has different values then it would prove that the words are not anagrams of each other. 
			return false ; // return statement of false 
		} 
	}

	return true ; // if each index of both words are the same then we conclude that it is true. Therefore, return true. 
}