/******************************************************************************
				REPORT
THE PROBLEM GIVEN HERE IS BASED UPON ASCII VALUE.
BASICALLY, THIS IS A CASE SENSITIVE PROGRAM.
THE CODE DEVELOPED HERE GETS THE INPUT STRING.
IT REMOVES THE DUPLICATE CHARACTER IN THE STRING.
HERE THE DIFFERENTIATES LOWER CASE AND UPPER-CASE CHARACTER. 
SO, IT PRINTS LOWER CASE AND UPPER CASE OF A CHARACTER IN ASCENDING OF ASCII VALUES.
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int cmp(const void *a, const void *b){
	return *(char*)a - *(char*)b;
}

int main(){
	char string[32];
	scanf("%[^\n]", string);
	qsort(string, strlen(string), sizeof(char), cmp);
	for(int i = 0; string[i]; i++)
		if(string[i] != string[i+1] && !isspace(string[i]))
			printf("%c", string[i]);
}
