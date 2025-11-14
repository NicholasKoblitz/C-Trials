#include <stdio.h>
#include <string.h>
#include "main.h"
#include "stack.h"


int main(void) {
	
	char expression[];
	int len = strlen(expression)
	Stack stack;
	stack
	init();
	
	printf("Enter Expression: \n");
	scanf("%s", expression);
	
	for(int i = 0; 0 < len; i++) {
		push(&stack, expression[i]);
	}
	
	return 0;
}