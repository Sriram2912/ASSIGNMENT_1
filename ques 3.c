/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

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
