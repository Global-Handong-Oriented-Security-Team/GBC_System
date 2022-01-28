#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

int main(int argc, char **argv) { 
	char palindrome[256];  
	strcpy(palindrome, argv[1]) ; 
	
	int check = 1; 
	int length = strlen(palindrome);  
	for (int i = 0 ; i < length/2 ; i++) { 
		if ( palindrome[i] != palindrome[length - i - 1]) { 
			check = 0 ; 
			break; 
		} 
	} 

	if (check) { 
		printf("%s is a palindrome", palindrome); 
	} else  {
		printf("%s is not a palindrome", palindrome) ;
	} 
	return 0 ;
}  
	
	
