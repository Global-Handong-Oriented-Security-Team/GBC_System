#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int main(int argc, char ** argv) { 
	char buf[40] ; 
	
	if ( argv[1][47] == '\xff') 
	{ 
		puts("You can't use a stack address!"); 
		exit(1) ; 	
	}

	if ( argv[1][47] == '\xf7') 
	{
		puts("You can't use a library address!") ; 
		exit(1) ; 
	}

	strncpy(buf, argv[1], 48) ; 
	printf("%s\n", buf) ; 
	return 0 ;
} 
