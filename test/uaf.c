#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

typedef struct { 
	char name[12] ; 
	int age ; 
	int height ; 
	void (*print) (void*) ; 
} test; 

void printName(test * t) 
{ 
	printf("printName: %s\n", t->name) ; 
}

void uaf() { 
	printf("Use After Free");  
	system("/bin/sh"); 
}

int main(int argc, char **argv) { 
	test * t ;
	test * t2 ; 
	
	t = (test *)malloc(sizeof(test)); 
	strcpy(t->name, "noname");
 	
	t->print = (void *)printName; 
	
	t->print(t); 
	free(t) ; 
	
	t2 = (test *)malloc(sizeof(test)) ; 
	scanf("%s", t2->name);
 
	t2->print(t2);  
	
	free(t2); 
	return 0; 
} 
