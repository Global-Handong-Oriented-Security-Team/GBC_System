#include <stdio.h> 
#include <stdlib.h>

int main(void) { 
	printf("SHELLCODE: %p\n", getenv("SHELLCODE")); 
	return 0 ;
}
