/******************************************************************************
				REPORT
THE PROBLEM GIVEN HERE IS BASED UPON ASCII VALUE.
BASICALLY, THIS IS A CASE IN SENSITIVE PROGRAM.
THE CODE DEVELOPED HERE GETS THE INPUT STRING. 
IT REMOVES THE DUPLIOCATE CHARACTER IN THE STRING IRRESPECTIVE OF CASE. 
THAT IS IT DOESNOT DIFFERENTLOWER CASE AND UPPERCASE.
SO, IT PRINTS THE LOWER CASE OF A CHARACTER ONLY.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

unsigned int isFirstOccurance(char *string, char target, unsigned int index){
	for(int i = 0; string[i]; i++)
		if(tolower(string[i]) == tolower(target))
			return index == i;
	return 0;
}

int main(){
	char string[32];
	unsigned int freqs[32] = {};
	scanf("%[^\n]", string);
	for(int i = 0; string[i]; i++)
		if(isFirstOccurance(string, string[i], i))
		printf("%c", tolower(string[i]));
}

