/******************************************************************************
				REPORT
THE PROBLEM GIVEN HERE IS BASED UPON ASCII VALUE.
BASICALLY, THIS IS A CASE SENSITIVE PROGRAM.
THE CODE DEVELOPED HERE GETS THE INPUT STRING.
IT REMOVES THE DUPLICATE CHARACTER IN THE STRING.
HERE THE PROGRAM DIFFERENTIATES LOWER CASE AND UPPER-CASE CHARACTER. 
SO, IT PRINTS LOWER CASE AND UPPER CASE OF A CHARACTER.
*******************************************************************************/
#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[30],c='*';  
    int  i,j,k=0,n;
 
    printf("Enter  the string : ");
    scanf("%[^\n]",&s); 
    for(i=0;s[i];i++)
    {
    	if(!(s[i]==c))
    	{
    		for(j=i+1;s[j];j++)
            {
            	if(s[i]==s[j])
            	   s[j]=c;
        	
		    }
    		
		}
     	
     	
    }
 
    for(i=0;s[i];i++)
    {
     	s[i]=s[i+k];
 
     	
     	if(s[i]==c)
     	{
		  k++;
		  i--;
	    }
     	
    }
    printf("New String : ");
 
 	 printf("%s",s);
 	 
     
    return 0;
}


