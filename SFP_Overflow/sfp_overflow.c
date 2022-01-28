#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

void func(char *src) 
{ 
	char buf[32] ; 
	strncpy(buf, src, 33) ; 
	puts(buf) ; 	
}

int main(int argc, char ** argv)
{ 
	func(argv[1]);
	return 0 ;   
}	
