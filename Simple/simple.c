#include <stdio.h>

void sum(int a, int b) { 
	printf("sum : %d", a + b); 
} 

int main(void) { 
	int num1, num2; 

	scanf("%d %d", &num1, &num2); 	
	sum(num1, num2) ;
	
	return 0; 
}
