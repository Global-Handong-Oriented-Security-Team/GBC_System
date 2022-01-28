#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
// Use After Free 

int main(void) {
	char * buf; 
	char * buf2; 
	buf = (char *)malloc(sizeof(char) * 128) ; 
	strcpy(buf, "AAAAAAAAAA"); 	
	free(buf) ; 
	
	buf2 = (char *)malloc(sizeof(char) * 128) ; 
	
	printf("buf2: %s\n", buf2) ; 
	
	return 0;  
} 	
