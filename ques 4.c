/******************************************************************************
				REPORT
THE PROBLEM GIVEN HERE IS BASED UPON ASCII VALUE.
BASICALLY, THIS IS A CASE SENSITIVE PROGRAM.
THE CODE DEVELOPED HERE GETS THE INPUT STRING.
IT COUNTS THE NO OF INDIVIDUAL CHARACTERS IN THE STRING.
THAT IS IT LOWER CASE AND UPPER CASE SEPERATELY FOR A CHARACTER.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

unsigned int occurances(char *string, char target){
	unsigned int count = 0;
	for(int i = 0; string[i]; i++)
		if(string[i] == target)
			count++;
	return count;
}

unsigned int isFirstOccurance(char *string, char target, unsigned int index){
	for(int i = 0; string[i]; i++)
		if(string[i] == target)
			return index == i;
	return 0;
}

int main(){
	char string[32];
	unsigned int freqs[32] = {};
	scanf("%[^\n]", string);
	for(int i = 0; string[i]; i++)
		if(isFirstOccurance(string, string[i], i))
		printf("Character \"%c\" = %d\n", string[i], occurances(string, string[i]));
}

